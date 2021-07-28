/*how to dominate dom with js */ 

function s() {
    document.getElementById('demo').innerHTML
    alert('hello mother fucker')
}

function ww() {
    document.getElementByID('demo').style.fontSize = '35px';
}

function jswag () {
    document.getElementById('hailey').innerHTML = "CHanged";
}

function smith() {
    window.alert(5+6);
}

//js statement
let x, y, z;
x = 5;
y = 12;
z = x+ y;
console.log(z);
// Create an Array:
function carsz() {
    const cars = ["Saab", "Volvo", "BMW"];

    //Change an element
    cars[0] = "toyota";
    //Add element
    cars.push("Audi");
    document.getElementById("jscript").innerHTML = cars;
}

function fiction() {
    const car = {
        type:"Fiat",
        model: "500",
        color: "white"
    };

    //change properties:
    car.color = "red";
    // add property
    car.owner = "johnson";
    car.size = "3m";
    document.getElementById("jav").innerHTML = car.owner + " " + car.size + " "
    + car.type + " " + car.model + " " + car.color;
}


// how to use return function
function mys(a, b) {
    return a*b;
}



function toCelsius(fahrenheit) {
  return (5/9) * (fahrenheit-32);
} 


//object
// infinity
let myNumber = 2;
let txta = "";
while (myNumber != Infinity) {
    myNumber *= myNumber;
    txta = txta + myNumber + "<br>";
}
console.log(txta);



function big() {
    const khanhuyen = ["always love me", "loved me alot", "sometime cute"];
    document.getElementById("dem1").innerHTML = "OG array:<br>" + khanhuyen;
    khanhuyen.splice(2,0, "Lemon", "Kiwi");
    document.getElementById("dem2").innerHTML = "New array:<br>" + khanhuyen;
}

// Fisher yates style
/*
const mac_miller = [40, 100, 200, 12, 41,25, 19, 81, 100, 10000, 20];
document.getElementById("fisher").innerHTML = mac_miller;
function macky() {
    for (let i = 0; i < mac_miller.length; i--){
        let j = Math.floor(Math.random() * i);
        let k = points[i];
        points[i] = points[j];
        points[j] = k;
    }
    document.getElementById("fisher").innnerHTML = mac_miller;
}*/