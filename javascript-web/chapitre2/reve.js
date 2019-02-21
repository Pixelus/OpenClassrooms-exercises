// TODO : écrire la fonction compterElements
function compterElements(element) {
    var numberOfElmts = document.querySelectorAll(element);
    return numberOfElmts.length;
}

console.log(compterElements("p")); // Doit afficher 4
console.log(compterElements(".adjectif")); // Doit afficher 3
console.log(compterElements("p .adjectif")); // Doit afficher 3
console.log(compterElements("p > .adjectif")); // Doit afficher 2
