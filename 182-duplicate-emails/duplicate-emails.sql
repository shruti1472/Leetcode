SELECT DISTINCT p1.Email
From Person p1
Join Person p2
WHERE p1.Email =p2.EmaiL AND p1.Id <> p2.Id
