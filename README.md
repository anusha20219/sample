# program 1
To check whether the given strings are anagram or not.

# program 2 
To check the given arrays are equal or not.

# program 3
To check sum of even numbers divisible by 3.

# program 4
To check the sum of numbers divisible by 3.

# program 5

# MICRO AND ARRAY UPDATE

Micro purchased an array A having N integer values. After playing it for a while, he got bored of it and decided to update value of its element. In one second he can increase value of each array element by 1. He wants each array element's value to become greater than or equal to K. Please help Micro to find out the minimum amount of time it will take, for him to do so.

Input:
First line consists of a single integer, T, denoting the number of test cases.
First line of each test case consists of two space separated integers denoting N and K.
Second line of each test case consists of N space separated integers denoting the array A.

Output:
For each test case, print the minimum time in which all array elements will become greater than or equal to K. Print a new line after each test case.

Constraints:
1<=T<=5
1<=N<=10^5
1<=A[i],K<=1^6


SAMPLE INPUT 

2

3 4

1 2 5


3 2

2 5 5

SAMPLE OUTPUT 

3

0


# program 6

# HAMILTONIAN AND LAGRANGIAN

Students have become secret admirers of SEGP. They find the course exciting and the professors amusing. After a superb Mid Semester examination its now time for the results. The TAs have released the marks of students in the form of an array, where arr[i] represents the marks of the ith student.

Since you are a curious kid, you want to find all the marks that are not smaller than those on its right side in the array.

Input Format
The first line of input will contain a single integer n denoting the number of students.
The next line will contain n space separated integers representing the marks of students.

Output Format
Output all the integers separated in the array from left to right that are not smaller than those on its right side.

Constraints
1 <= n <= 1000000
0 <= arr[i] <= 10000

SAMPLE INPUT

6

16 17 4 3 5 2

SAMPLE OUTPUT

17

5

2


# program 7

# PINK FLOYD AND HAPPINESS

Pink is sad because of some reasons, he wants to cheer up by listening to some songs from his favourite band, Pink Floyd.

There are N records and Pink will be happy if he listens to them in the ascending order, i.e, first the song No. 1, then No.2 and so on(He has to listen to all the N songs to become Happy).

Pink is delivered his records in some given order, he can either add the record to the Playlist in the delivered order or put some on an another table. After being put on the table only the topmost record can be added to the playlist at any time.

Print whether Pink will be sad or happy after the delivery of the records.

INPUT

N - Number of records followed  by

N numbers- order of records

OUTPUT

Print "Happy" if the playlist has songs from 1 to N in order else "Sad".

CONSTRAINTS

1<=N<=10^5

The array consists of 1-N distinct numbers.
SAMPLE INPUT

5

1 2 4 3 5

SAMPLE OUTPUT 

Happy


# program 8

# FRUSTRATED CODERS

There are N frustrated coders standing in a circle with a gun in their hands. Each coder has a skill value S[ i ] and he can only kill those coders that have strictly less skill than him. One more thing, all the guns have only 1 bullet. This roulette can take place in any random order. Fortunately, you have the time stone (haaan wo harre wala) and you can see all possible outcomes of this scenario. Find the outcome where the total sum of the remaining coder's skill is minimum. Print this sum.

INPUT

The first line contains N the no. of coders

The next line contains N  elements where the ith element is theS[ i ] of ith coder.

OUTPUT

Print a single line containing the minimum sum

CONSTRAINTS

1<= N <= 1000000

1<=S[ i ]<=1000

SAMPLE INPUT 

6

1 7 2 2 4 4

SAMPLE OUTPUT

11


# program 9

# HACKER AND TRAFFIC LIGHTS

Zolo is stuck in a traffic due to dysfunctional traffic light. Zolo is a professional hacker and he can get into the system and change the state of the light. His planet has different types of traffic lights such that there are N bulbs on the traffic board and only when all of them are green(G) the cars can pass. there are 2 other states also which the bulb can show; i.e. Red(R) & Yellow(Y). Note that the lights are designed such that they follow a state change cyclic pattern as follows:

                                       R------>Y------>G------->R

Once Zolo gets into the system he can select any position i and update all elements between i to min(N, i + K - 1)  by increasing their state by 1.This whole process takes 1 sec and he can repeat this process any no. of times until he gets all lights = G . Find the minimum time to do the process as Zolo is getting late for work.

INPUT:

The first line contains N K

The second line describes the current status of each bulb as an array whose each element can either be G or Y or R

OUTPUT:

print the minimum amount of time required to clear the traffic jam.

CONSTRAINTS

1<=N, K<=100000

SAMPLE INPUT 

4

2

R Y G Y


SAMPLE OUTPUT 

5


# program 9
# REMOVE FRIENDS


After getting her PhD, Christie has become a celebrity at her university, and her facebook profile is full of friend requests. Being the nice girl she is, Christie has accepted all the requests.

Now Kuldeep is jealous of all the attention she is getting from other guys, so he asks her to delete some of the guys from her friend list.

To avoid a 'scene', Christie decides to remove some friends from her friend list, since she knows the popularity of each of the friend she has, she uses the following algorithm to delete a friend.

Algorithm Delete(Friend):


    DeleteFriend=false
    for i = 1 to Friend.length-1
         if (Friend[i].popularity < Friend[i+1].popularity)
            delete i th friend
            DeleteFriend=true
            break
    if(DeleteFriend == false)
        delete the last friend

Input:


First line contains T number of test cases. First line of each test case contains N, the number of friends Christie currently has and K ,the number of friends Christie decides to delete. Next lines contains popularity of her friends separated by space.

Output:


For each test case print N-K numbers which represent popularity of Christie friend's after deleting K friends.

Constraints


1<=T<=1000
1<=N<=100000
0<=K< N
0<=popularity_of_friend<=100

NOTE:


Order of friends after deleting exactly K friends should be maintained as given in input.


