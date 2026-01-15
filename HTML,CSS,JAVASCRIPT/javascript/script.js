// function greet(){
//             let name = document.querySelector("#name").value;
//             alert("Hello "+ name + "!");
//         }
document.querySelector('form').addEventListener('submit', function(){
   let name = document.querySelector("#name").value;
   alert("Hello "+ name + "!");
   event.preventDefault();
});