select H.hacker_id, name
from hackers H join submissions S
on H.hacker_id = S.hacker_id join challenges C
on S.challenge_id = C.challenge_id join difficulty D
on C.difficulty_level = D.difficulty_level
where S.score = D.score and C.difficulty_level = D.difficulty_level
group by H.hacker_id, H.name
having count(S.hacker_id)>1
order by count(S.hacker_id) desc, S.hacker_id asc;