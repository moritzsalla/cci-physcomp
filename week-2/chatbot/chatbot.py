
import time

class color:
   BOLD = '\033[1m'
   END = '\033[0m'

def sleep(s):
    time.sleep(s)

def br(n):
  for x in range(0, n):
    log("")

def log(x):
    print(color.BOLD + x + color.END)

# intro
br(3)
log("good to have you at burger express, best burgers in town.")

sleep(1)

# convo one
br(1)
log("how many gurkens would you like on your burger?")
sleep(0.5)

for x in range(1, 6):
    stringX = str(x)
    log(stringX)
    sleep(0.25)

log("10?")
sleep(0.5)
log("50?")

input1 = input()
input1c = int(input1)
br(1)

if input1c >= 3:
    log("dude, we don't have buckets of those.")
else:
    log("i'll put three. go gurkens or go home.")

sleep(1)

# convo two
br(1)
log("mayo? ketchup?")
input2 = input()

if input2 == "no":
    log("those belong on a burger. i'll put just a little.")
elif input2 == "yes":
    log(
        "actually i'm pretty low on those. the other customers will want some too. i'll put chipotle, hope you don't mind"
    )
else:
    log('whatever you want. cutomer is "king" as they say.')

sleep(1)

# convo three
br(1)
log("veggies?")

input3 = input()

if input3 == "yes":
    log("alright fancypants. just a headsup, this aint vegan")
elif input3 == "no":
    log(
        "this'll clog your arteries with or without the lettuce, why bother huh?"
    )
else:
    log("yeah..")

sleep(1)

# end
br(3)
log(
    "that'll be all. you look like a well done kinda person, didn't bother to ask. my collegue will shout your name once it's done. have a fabulous day."
)
