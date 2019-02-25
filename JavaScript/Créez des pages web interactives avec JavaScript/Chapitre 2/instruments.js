// TODO : écrire la fonction infosLiens
function infosLiens() {
    var numberOfElmts = document.querySelectorAll("a");
    var index = numberOfElmts.length;
    // Affiche le nombre total de liens dans la page web
    console.log(numberOfElmts.length);    
    // Affiche la cible du premier lien
    var firstLink = document.querySelector("a").href;
    console.log(firstLink);
    // Affiche la cible du dernier lien
    var lastLink = (document.getElementsByTagName("a"));
    console.log(lastLink[index - 1].href);
}

// TODO : ajouter un nouvel instrument à la page web et vérifiez le nouveau résultat 
infosLiens();

// TODO : écrire la fonction possede qui vérifie qu'un élément possède une classe
function possede(id, classe) {
    if(document.getElementById(id)) {
        console.log(document.getElementById(id).classList.contains(classe));   
    } else {
        console.log("Aucun élément ne possède l'identifiant " + id);
    }
}

possede("saxophone", "bois"); // Doit afficher true
possede("saxophone", "cuivre"); // Doit afficher false
possede("trompette", "cuivre"); // Doit afficher true
possede("contrebasse", "cordes"); // Doit afficher une erreur
