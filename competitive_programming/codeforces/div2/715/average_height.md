Sayaka Saeki is a member of the student council, which has n other members (excluding Sayaka). The i-th member has a height of ai millimeters.

It's the end of the school year and Sayaka wants to take a picture of all other members of the student council. Being the hard-working and perfectionist girl as she is, she wants to arrange all the members in a line such that the amount of photogenic consecutive pairs of members is as large as possible.

A pair of two consecutive members u and v on a line is considered photogenic if their average height is an integer, i.e. au+av2 is an integer.

Help Sayaka arrange the other members to maximize the number of photogenic consecutive pairs.

Input
The first line contains a single integer t (1≤t≤500) — the number of test cases.

The first line of each test case contains a single integer n (2≤n≤2000)  — the number of other council members.

The second line of each test case contains n integers a1, a2, ..., an (1≤ai≤2⋅105)  — the heights of each of the other members in millimeters.

It is guaranteed that the sum of n over all test cases does not exceed 2000.

Output
For each test case, output on one line n integers representing the heights of the other members in the order, which gives the largest number of photogenic consecutive pairs. If there are multiple such orders, output any of them.