// function greet(){
//             let name = document.querySelector("#name").value;
//             alert("Hello "+ name + "!");
//         }

document.addEventListener('DOMContentLoaded', function(){
document.querySelector('form').addEventListener('submit', function(){
   let name = document.querySelector("#name").value;
   alert("Hello "+ name + "!");
   event.preventDefault();
});
    });

//         function blink(){
//         let body = document.querySelector("body");
//         if(body.style.visibility == "hidden"){
//             body.style.visibility = "visible";
//         }else{
//             body.style.visibility = "hidden";
//         }
//     }
//  window.setInterval(blink,500);
