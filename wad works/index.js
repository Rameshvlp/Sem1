function touch()
{
    let name = prompt("Please enter your name");
}
var temp1;
var temp2;
var check= /^[A-Za-z]+$/;
function function1(){
temp1=prompt("Enter the first name:");
if(temp1.match(check))
{
return true;
}
else
{
alert("Name must be in alphabet characters only");
return false;
}
}
function function2(){
temp2=prompt("Enter the last name:");
if(temp1.match(check))
{
return true;
}
else
{
alert("Name must be in alphabet characters only");
return false;
}
}
var temp3;
function function3(){
temp3=temp1.concat(" ", temp2);
document.getElementById("ar1").innerHTML= "YOUR NAME: "+temp3;
}
function function4(){
var date = new Date();
var hr = date.getHours();
if(hr<12){
document.getElementById("ar2").innerHTML= "GOOD MORNING-"+temp3;
}
else if(hr >= 12 && hr <= 17){
document.getElementById("ar2").innerHTML= "GOOD AFTERNOON-"+temp3;
}
else if (hr >= 17 && hr <= 24){
document.getElementById("ar2").innerHTML= "GOOD EVEING-"+temp3;
}
}
function function5(){
let a;
let b;
let tot;
a=temp1.length;
b=temp2.length;
tot=a+b;
document.getElementById("ar3").innerHTML= "Hi  "+temp3+": Your name is "+tot+" in length.";
}
function function6(){
var rf=temp1.split("");
var rf1=rf.reverse();
var rf2=rf1.join("");
var rl=temp2.split("");
var rl1=rl.reverse();
var rl2=rl1.join("");
var rtemp=rf2.concat(" ", rl2);
document.getElementById("ar4").innerHTML= "THE REVERSE:"+rtemp;
}
function function7(){
var capf=temp1.charAt(0).toUpperCase() + temp1.slice(1);
var capt=temp2.charAt(0).toUpperCase() + temp2.slice(1);
var ctemp=capf.concat(" ", capt);
document.getElementById("ar5").innerHTML= "YOUR NAME: "+ctemp;
}
