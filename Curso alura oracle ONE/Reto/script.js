

function encriptar (){
    var texto = document.querySelector(".textArea").value;
    var textoCifrado = texto.replace(/e/gi, "enter").replace(/i/gi, "imes").replace(/a/gi, "ai").replace(/o/gi, "ober").replace(/u/gi, "ufat");
    document.querySelector(".mensaje").value = textoCifrado;
    document.querySelector(".textArea").value;
    }


    
var boton1 = document.querySelector(".botonEncriptar"); boton1.onclick = encriptar;

function desencriptar (){ var texto = document.querySelector(".textArea").value; var textoCifrado = texto.replace(/enter/gi, "e").replace(/imes/gi, "i").replace(/ai/gi, "a").replace(/ober/gi, "o").replace(/ufat/gi, "u"); document.querySelector(".mensaje").value = textoCifrado; document.querySelector(".textArea").value;

}

var boton2 = document.querySelector(".botonDesencriptar"); boton2.onclick = desencriptar;
