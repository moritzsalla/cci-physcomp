let colorA = "#BCB382"
let colorB = "#2D4739"
let colorC = "#3C4F76"

let delay = 100
let pause = 3000

let start = document.querySelector("body > div.start > div")

let lampA = document.querySelector("div.lamp.lamp-a")
let lampB = document.querySelector("div.lamp.lamp-b")
let lampC = document.querySelector("div.lamp.lamp-c")

let buttonA = document.querySelector("div.button.button-a")
let buttonB = document.querySelector("div.button.button-b")
let buttonC = document.querySelector("div.button.button-c")

// turn all lamps off
lampA.classList.add("off")
lampB.classList.add("off")
lampC.classList.add("off")

// on or off
function lightOn(x) {
  x.classList.remove("off")
}

function lightOff(x) {
  x.classList.add("off")
}

// click start to start
start.addEventListener("click", function() {
  levelOne()
  console.log("click")
})

// levels
function levelOne() {
  setTimeout(lightOn(lampA), pause);
  lightOff(lampA)
}