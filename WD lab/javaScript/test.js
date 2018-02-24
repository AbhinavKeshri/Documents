//alert("Hello");
var variableName;
function getAvarage(a,b)
{
	var average = (a+b)/2;
	return average;
}
var myResult = getAvarage(8,9);
console.log(myResult);

variableName = 10;
//var myVar = "hello";
//alert(myVar);
//var abh = myVar + variableName;
//var number = 90;
//number+= 9;
// all the c schortcuts are available in java.
//document.write(abh); 

console.log("hello");
// console gives the access to the console of the browser.
var ilikeKaushiki = false;
Boolean(4>3);
console.log(Boolean(""));
console.log(Boolean("abhaanv"));

console.log(Boolean(34));
// if and control statements
if("something")
    {
        console.log("something is true");
    }

if(3<6)
    {
        console.log("dfslfjdsfj");
    }
var age = 9;
//while (age!=90)
//	{
//		document.write(" not 90 ");
//		age++;
//	}

var link = document.getElementsByTagName("a");
for(i = 0; i<link.length; i++)
	{
		link[i].className = "link " + i;
		//the above code will name the link in my html code.
	}


document.getElementById("content");
//make the image visible
//make the image invisible

//this is how you check if user has entered a number or not.
var a = "8";
console.log("ui");
if(!isNaN(a))
	{
		console.log("you did not Enter a number.");
	}
var myString = "I am an Idiot.";
myString = myString.toLowerCase();
if(myString.indexOf("Idio") == -1)
	{
		console.log("you are an idiot.");
	}
var myArray = [];
myArray = myString.split(" ");
console.log(myArray[3]);



//Creating a new Object 2 methods

var myObj = new Object();
myObj.name  = "abhianv";
myObj.age = 21;
myObj.print = function(a){
	console.log("my name is " + this.name + " my age is " + this.age);
	console.log(typeof(a));
};

myObj.print("nadfsdn");


var myObj2 = {
	name : "keshri",
	age : 12,
	print:function(a){
	console.log("my name is " + this.name + " my age is " + this.age);
	console.log(typeof(a));
	
	}
};

	
	myObj2.print("nadfsdn");

// class (so called)
var className  = function(parameter1, parameter2)
{
	this.classData= parameter1;
	this.classfunction = function(parm1, parm2)
	{
		console.log(parm1+parm2 + this.classData);
	};
};

var abhianv = new className(3,4);
abhianv.classfunction("abhaivn ", "Keshri");

var myDate = new Date();
console.log(myDate);

var myPastDate = new Date(1998,0,23,10,30,15);
var myfutureDate = new Date(2018,3,31);
console.log(myPastDate);

console.log(myDate.getMonth());
console.log(myPastDate.getTime());
//getTime method is very important when comparing dates.