CS 315 Project 3
Blake Sweet

	This program, given a text file, will count the number of times a word is used in a program. It scans each word and removes punctuation while reading the file, then inserts the data into a heap array. The program then sorts this array after finished scanning the text file and displays the results in the format listed below. 

== Instructions:
	- The program begins by asking the user if they would like to default to read from "data.txt" file. If chosen yes (with input 'y' or 'Y'), the text in the file will be read in 
	and used for the program. If chosen no (with input 'n' or 'N'), the program will ask for you to enter another text file to read from (please add the ".txt" extension to the end
	of the file name. At this point the program will "accept the text file from standard input".
	- The output is formatted in the form "(word) (number of times used)".

== Notes:
	- There is a single blank line between the 2 outputs per program run. The first output is sorted in alphabetical order, and the second is sorted by number of occurrences.
	- A hash table is used to store the data, then quick sort was chosen to be used for sorting. 
	- My own test data is the given data twice. Therefore I tested the accuracy by expecting all word counts to be double; while also testing that the program would still run with a	longer list.
	- I chose to stop the program after one use. The "sh pause" error at the end of the program is simply because the program was created on a Mac, however the system command 
	inserted at the end is for windows. This should allow the grader to pause the program and see the output assuming they are using a Windows PC and the error code will not exist.

===== Output from data.txt (Given text)=====
Read from default data.txt?
Enter y or n: y


Ah 1
Aidenn 1
Allan 1
And 8
As 1
Bird 1
But 6
By 3
Caught 1
December 1
Deep 1
Doubting 1
Doubtless 1
Edgar 1
Fancy 1
For 2
From 1
Gileadtell 1
God 2
Hope 1
I 32
In 1
Is 1
Lenore 8
Let 2
Madam 1
Meant 1
Much 1
Nameless 1
Nevernevermore 1
Nightly 1
Nights 2
Not 1
Of 1
On 4
Once 1
Only 1
Open 1
Other 1
Over 1
Pallas 2
Poe 1
Presently 1
Quaff 1
Raven 11
Respiterespite 1
Seraphim 1
Shall 1
She 1
Sir 1
So 1
Startled 1
Tempter 1
The 1
Then 4
This 4
Though 2
Till 2
Tis 3
While 1
a 15
above 7
ah 1
air 1
all 4
an 2
ancient 1
and 30
angels 4
as 4
ashore 1
be 3
beak 1
beast 1
before 5
being 1
bends 1
black 1
bleak 1
books 1
borrow 1
broken 1
burden 2
burning 1
bust 6
by 3
came 3
cannot 1
chamber 11
countenance 1
craven 1
cried 1
croaking 1
curious 1
curtain 1
cushioned 1
cushions 1
dared 1
decorum 1
dirges 1
discourse 1
distinctly 1
dream 1
dreaming 2
dreams 1
dreary 1
dying 1
each 2
ebony 1
echo 1
ember 1
entrance 2
evermore 1
evilprophet 2
explore 2
expressing 1
eyes 2
fact 1
fancy 3
fantastic 1
farther 1
fast 1
fearing 1
felt 1
fiend 1
floor 4
flown 2
flung 1
flutter 1
fluttered 1
followed 1
footfalls 1
for 2
forgiveness 1
forgotten 1
friends 1
gaunt 1
gave 1
gently 2
ghastly 1
ghost 1
gloated 1
grave 1
had 1
hath 3
he 7
hear 1
heard 2
heart 3
here 3
hesitating 1
him 1
implore 3
in 6
into 6
is 9
it 4
its 3
just 2
late 1
lattice 1
lie 1
liftednevermore 1
little 1
living 1
loneliness 1
long 1
lordly 1
lore 1
made 1
many 2
marvelled 1
master 1
me 7
mefilled 1
melancholy 1
memories 1
methought 1
midnight 1
more 8
morrow 1
morrowvainly 1
mortal 1
murmured 1
muttered 2
my 24
mystery 2
name 5
napping 2
nearly 1
nepenthe 2
never 2
nevermore 1
nodded 1
nothing 6
now 2
oer 3
of 21
off 1
one 4
opened 1
or 8
our 1
out 2
outpour 1
pallid 1
peering 1
perched 1
plainly 1
plume 1
pondered 1
quaff 1
quaint 1
radiant 2
rapping 3
rare 2
reclining 1
remember 1
repeating 1
rustling 1
sad 2
sainted 1
saintly 1
scarce 1
scarcely 1
sculptured 1
seat 1
see 1
separate 1
shaven 1
shorn 1
shutter 1
silken 1
sitting 3
so 4
some 4
something 1
sorrow 1
sorrowsorrow 1
sought 1
soul 6
spoken 3
stayed 1
stern 1
stillness 2
stock 1
stood 2
store 1
stronger 1
suddenly 1
surcease 1
sure 2
surely 1
syllable 1
tapping 5
terrors 1
that 15
the 56
then 4
there 6
thereis 1
thing 2
this 13
thou 1
thy 7
to 5
token 2
truly 2
unbrokenquit 1
uncertain 1
undaunted 1
ungainly 2
unhappy 1
unmerciful 1
upon 5
utterednot 1
utters 1
visitor 3
volume 1
was 6
weak 1
weary 1
wheeled 1
while 1
whispered 2
whom 4
wide 1
wished 1
with 7
wondering 1
wore 1
yet 2
youhere 1
your 1

the 56
I 32
and 30
my 24
of 21
a 15
that 15
this 13
chamber 11
Raven 11
is 9
And 8
or 8
Lenore 8
more 8
with 7
thy 7
he 7
me 7
above 7
was 6
in 6
into 6
bust 6
there 6
nothing 6
But 6
soul 6
name 5
tapping 5
before 5
to 5
upon 5
as 4
whom 4
This 4
floor 4
one 4
so 4
some 4
all 4
On 4
then 4
angels 4
Then 4
it 4
its 3
hath 3
heart 3
spoken 3
here 3
oer 3
By 3
Tis 3
implore 3
by 3
came 3
be 3
rapping 3
visitor 3
sitting 3
fancy 3
yet 2
nepenthe 2
never 2
Till 2
now 2
flown 2
for 2
gently 2
For 2
out 2
radiant 2
Pallas 2
rare 2
sad 2
heard 2
burden 2
God 2
Let 2
an 2
stillness 2
stood 2
sure 2
Nights 2
dreaming 2
each 2
entrance 2
just 2
thing 2
many 2
evilprophet 2
explore 2
token 2
truly 2
ungainly 2
muttered 2
eyes 2
mystery 2
whispered 2
Though 2
napping 2
your 1
youhere 1
Ah 1
Aidenn 1
Allan 1
As 1
Bird 1
Caught 1
December 1
Deep 1
Doubting 1
Doubtless 1
Edgar 1
Fancy 1
From 1
Gileadtell 1
Hope 1
In 1
Is 1
Madam 1
Meant 1
Much 1
Nameless 1
Nevernevermore 1
Nightly 1
Not 1
Of 1
Once 1
Only 1
Open 1
Other 1
Over 1
Poe 1
Presently 1
Quaff 1
Respiterespite 1
Seraphim 1
Shall 1
She 1
Sir 1
So 1
Startled 1
Tempter 1
The 1
While 1
ah 1
air 1
ancient 1
ashore 1
beak 1
beast 1
being 1
bends 1
black 1
bleak 1
books 1
borrow 1
broken 1
burning 1
cannot 1
countenance 1
craven 1
cried 1
croaking 1
curious 1
curtain 1
cushioned 1
cushions 1
dared 1
decorum 1
dirges 1
discourse 1
distinctly 1
dream 1
dreams 1
dreary 1
dying 1
ebony 1
echo 1
ember 1
evermore 1
expressing 1
fact 1
fantastic 1
farther 1
fast 1
fearing 1
felt 1
fiend 1
flung 1
flutter 1
fluttered 1
followed 1
footfalls 1
forgiveness 1
forgotten 1
friends 1
gaunt 1
gave 1
ghastly 1
ghost 1
gloated 1
grave 1
had 1
hear 1
hesitating 1
him 1
late 1
lattice 1
lie 1
liftednevermore 1
little 1
living 1
loneliness 1
long 1
lordly 1
lore 1
made 1
marvelled 1
master 1
mefilled 1
melancholy 1
memories 1
methought 1
midnight 1
morrow 1
morrowvainly 1
mortal 1
murmured 1
nearly 1
nevermore 1
nodded 1
off 1
opened 1
our 1
outpour 1
pallid 1
peering 1
perched 1
plainly 1
plume 1
pondered 1
quaff 1
quaint 1
reclining 1
remember 1
repeating 1
rustling 1
sainted 1
saintly 1
scarce 1
scarcely 1
sculptured 1
seat 1
see 1
separate 1
shaven 1
shorn 1
shutter 1
silken 1
something 1
sorrow 1
sorrowsorrow 1
sought 1
stayed 1
stern 1
stock 1
store 1
stronger 1
suddenly 1
surcease 1
surely 1
syllable 1
terrors 1
thereis 1
thou 1
unbrokenquit 1
uncertain 1
undaunted 1
unhappy 1
unmerciful 1
utterednot 1
utters 1
volume 1
weak 1
weary 1
wheeled 1
while 1
wide 1
wished 1
wondering 1
wore 1

sh: pause: command not found
Program ended with exit code: 0

===== Output from myData.txt (My own test case)=====
Read from default data.txt?
Enter y or n: n
Input filepath: myData.txt



Ah 2
Aidenn 2
Allan 2
And 16
As 2
Bird 2
But 12
By 6
Caught 2
December 2
Deep 2
Doubting 2
Doubtless 2
Edgar 2
Fancy 2
For 4
From 2
Gileadtell 2
God 4
Hope 2
I 64
In 2
Is 2
Lenore 16
Let 4
Madam 2
Meant 2
Much 2
Nameless 2
Nevernevermore 2
Nightly 2
Nights 4
Not 2
Of 2
On 8
Once 2
Only 2
Open 2
Other 2
Over 2
Pallas 4
Poe 2
Presently 2
Quaff 2
Raven 22
Respiterespite 2
Seraphim 2
Shall 2
She 2
Sir 2
So 2
Startled 2
Tempter 2
The 2
Then 8
This 8
Though 4
Till 4
Tis 6
While 2
a 30
above 14
ah 2
air 2
all 8
an 4
ancient 2
and 60
angels 8
as 8
ashore 2
be 6
beak 2
beast 2
before 10
being 2
bends 2
black 2
bleak 2
books 2
borrow 2
broken 2
burden 4
burning 2
bust 12
by 6
came 6
cannot 2
chamber 22
countenance 2
craven 2
cried 2
croaking 2
curious 2
curtain 2
cushioned 2
cushions 2
dared 2
decorum 2
dirges 2
discourse 2
distinctly 2
dream 2
dreaming 4
dreams 2
dreary 2
dying 2
each 4
ebony 2
echo 2
ember 2
entrance 4
evermore 2
evilprophet 4
explore 4
expressing 2
eyes 4
fact 2
fancy 6
fantastic 2
farther 2
fast 2
fearing 2
felt 2
fiend 2
floor 8
flown 4
flung 2
flutter 2
fluttered 2
followed 2
footfalls 2
for 4
forgiveness 2
forgotten 2
friends 2
gaunt 2
gave 2
gently 4
ghastly 2
ghost 2
gloated 2
grave 2
had 2
hath 6
he 14
hear 2
heard 4
heart 6
here 6
hesitating 2
him 2
implore 6
in 12
into 12
is 18
it 8
its 6
just 4
late 2
lattice 2
lie 2
liftednevermore 2
little 2
living 2
loneliness 2
long 2
lordly 2
lore 2
made 2
many 4
marvelled 2
master 2
me 14
mefilled 2
melancholy 2
memories 2
methought 2
midnight 2
more 16
morrow 2
morrowvainly 2
mortal 2
murmured 2
muttered 4
my 48
mystery 4
name 10
napping 4
nearly 2
nepenthe 4
never 4
nevermore 2
nodded 2
nothing 12
now 4
oer 6
of 42
off 2
one 8
opened 2
or 16
our 2
out 4
outpour 2
pallid 2
peering 2
perched 2
plainly 2
plume 2
pondered 2
quaff 2
quaint 2
radiant 4
rapping 6
rare 4
reclining 2
remember 2
repeating 2
rustling 2
sad 4
sainted 2
saintly 2
scarce 2
scarcely 2
sculptured 2
seat 2
see 2
separate 2
shaven 2
shorn 2
shutter 2
silken 2
sitting 6
so 8
some 8
something 2
sorrow 2
sorrowsorrow 2
sought 2
soul 12
spoken 6
stayed 2
stern 2
stillness 4
stock 2
stood 4
store 2
stronger 2
suddenly 2
surcease 2
sure 4
surely 2
syllable 2
tapping 10
terrors 2
that 30
the 112
then 8
there 12
thereis 2
thing 4
this 26
thou 2
thy 14
to 10
token 4
truly 4
unbrokenquit 2
uncertain 2
undaunted 2
ungainly 4
unhappy 2
unmerciful 2
upon 10
utterednot 2
utters 2
visitor 6
volume 2
was 12
weak 2
weary 2
wheeled 2
while 2
whispered 4
whom 8
wide 2
wished 2
with 14
wondering 2
wore 2
yet 4
youhere 2
your 2

the 112
I 64
and 60
my 48
of 42
a 30
that 30
this 26
chamber 22
Raven 22
is 18
And 16
or 16
Lenore 16
more 16
with 14
thy 14
he 14
me 14
above 14
was 12
in 12
into 12
bust 12
there 12
nothing 12
But 12
soul 12
name 10
tapping 10
before 10
to 10
upon 10
as 8
whom 8
This 8
floor 8
one 8
so 8
some 8
all 8
On 8
then 8
angels 8
Then 8
it 8
its 6
hath 6
heart 6
spoken 6
here 6
oer 6
By 6
Tis 6
implore 6
by 6
came 6
be 6
rapping 6
visitor 6
sitting 6
fancy 6
yet 4
nepenthe 4
never 4
Till 4
now 4
flown 4
for 4
gently 4
For 4
out 4
radiant 4
Pallas 4
rare 4
sad 4
heard 4
burden 4
God 4
Let 4
an 4
stillness 4
stood 4
sure 4
Nights 4
dreaming 4
each 4
entrance 4
just 4
thing 4
many 4
evilprophet 4
explore 4
token 4
truly 4
ungainly 4
muttered 4
eyes 4
mystery 4
whispered 4
Though 4
napping 4
your 2
youhere 2
Ah 2
Aidenn 2
Allan 2
As 2
Bird 2
Caught 2
December 2
Deep 2
Doubting 2
Doubtless 2
Edgar 2
Fancy 2
From 2
Gileadtell 2
Hope 2
In 2
Is 2
Madam 2
Meant 2
Much 2
Nameless 2
Nevernevermore 2
Nightly 2
Not 2
Of 2
Once 2
Only 2
Open 2
Other 2
Over 2
Poe 2
Presently 2
Quaff 2
Respiterespite 2
Seraphim 2
Shall 2
She 2
Sir 2
So 2
Startled 2
Tempter 2
The 2
While 2
ah 2
air 2
ancient 2
ashore 2
beak 2
beast 2
being 2
bends 2
black 2
bleak 2
books 2
borrow 2
broken 2
burning 2
cannot 2
countenance 2
craven 2
cried 2
croaking 2
curious 2
curtain 2
cushioned 2
cushions 2
dared 2
decorum 2
dirges 2
discourse 2
distinctly 2
dream 2
dreams 2
dreary 2
dying 2
ebony 2
echo 2
ember 2
evermore 2
expressing 2
fact 2
fantastic 2
farther 2
fast 2
fearing 2
felt 2
fiend 2
flung 2
flutter 2
fluttered 2
followed 2
footfalls 2
forgiveness 2
forgotten 2
friends 2
gaunt 2
gave 2
ghastly 2
ghost 2
gloated 2
grave 2
had 2
hear 2
hesitating 2
him 2
late 2
lattice 2
lie 2
liftednevermore 2
little 2
living 2
loneliness 2
long 2
lordly 2
lore 2
made 2
marvelled 2
master 2
mefilled 2
melancholy 2
memories 2
methought 2
midnight 2
morrow 2
morrowvainly 2
mortal 2
murmured 2
nearly 2
nevermore 2
nodded 2
off 2
opened 2
our 2
outpour 2
pallid 2
peering 2
perched 2
plainly 2
plume 2
pondered 2
quaff 2
quaint 2
reclining 2
remember 2
repeating 2
rustling 2
sainted 2
saintly 2
scarce 2
scarcely 2
sculptured 2
seat 2
see 2
separate 2
shaven 2
shorn 2
shutter 2
silken 2
something 2
sorrow 2
sorrowsorrow 2
sought 2
stayed 2
stern 2
stock 2
store 2
stronger 2
suddenly 2
surcease 2
surely 2
syllable 2
terrors 2
thereis 2
thou 2
unbrokenquit 2
uncertain 2
undaunted 2
unhappy 2
unmerciful 2
utterednot 2
utters 2
volume 2
weak 2
weary 2
wheeled 2
while 2
wide 2
wished 2
wondering 2
wore 2

sh: pause: command not found
Program ended with exit code: 0