class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        n = len(position)
        # Initialize 2D Array
        cars = [[0.0] * 2 for _ in range(n)]

        for i in range(n):
            # store the position for i position car
            cars[i][0] = position[i]
            # store the time to reach target for i position car
            cars[i][1] = (target - position[i]) / speed[i]
        
        # Sort the cars list according to time
        cars.sort(key=lambda x: x[0], reverse=True)

        cnt = 0
        prevTime = 0

        for car in cars:
            # check if the car's time is greater than previous time, if true increase count
            # and update the previous time as car's time
            if car[1]>prevTime:
                cnt += 1
                prevTime = car[1]
        
        return cnt