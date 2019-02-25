/* 
Activité : jeu de devinette
*/

// NE PAS MODIFIER OU SUPPRIMER LES LIGNES CI-DESSOUS
// COMPLETEZ LE PROGRAMME UNIQUEMENT APRES LE TODO

console.log("Bienvenue dans ce jeu de devinette !");

// Cette ligne génère aléatoirement un nombre entre 1 et 100
var solution = Math.floor(Math.random() * 100) + 1;

// Décommentez temporairement cette ligne pour mieux vérifier le programme
//console.log("(La solution est " + solution + ")");

// TODO : complétez le programme
var nombreEssai = 0;
while ((nombreEssai <= 6) && (nombre !== solution)) {
    var nombre = Number(prompt("Devinez le nombre choisi entre 1 et 100 :"));
    nombreEssai++;
    if (nombre === solution) {
        console.log("Bravo ! La solution était " + solution);
        console.log("Vous avez trouvé en " + nombreEssai + " essai(s)");
    } else { // Si (nombre !== solution)
        if (nombreEssai < 7) {
            if (nombre < solution) {
                console.log(nombre + " est trop petit"); 
            } else {
                console.log(nombre + " est trop grand");
            } 
        } else {
            console.log("Perdu... La solution était " + solution);
          } 
      }
}
