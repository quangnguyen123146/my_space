var r = document.querySelector(':root');

function myFunction_get() {
    var rs = getComputedStyle(r);
    alert("value of --blue is" + rs.getPropertyValue(' blue'));
}

function myFunction_set() {
    r.style.setProperty('blue', 'lightblue');
}