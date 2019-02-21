/* 
Activité : gestion des contacts
*/

// TODO : complétez le programme

var Contact = {
    // Initialise le contact
    init: function (nom, prenom) {
        this.nom = nom;
        this.prenom = prenom;
    },
    // Renvoie la description du contact
    decrire: function() {
        var description = "Nom : " + this.nom + ", prénom : " + this.prenom;
        return description;
    }
};

// Bienvenue dans le gestionnaire des contacts !
console.log("Bienvenue dans le gestionnaire des contacts !")

// 1 : Lister les contacts
console.log("1 : Lister les contacts");
// 2 : Ajouter un contact
console.log("2 : Ajouter un contact");
// 0 : Quitter
console.log("0 : Quitter");

var contact1 = Object.create(Contact);
contact1.init("Lévisse", "Carole");

var contact2 = Object.create(Contact);
contact2.init("Nelsonne", "Mélodie");

var contacts = [];
contacts.push(contact1);
contacts.push(contact2);

// Choisissez une option : (redemander jusqu'à ce que l'utilisateur choisisse de quitter)
while (choixSaisi != 0) {
    var choixSaisi = Number(prompt("Choisissez une option :"));
    if (choixSaisi != 0) {
        if (choixSaisi === 1) {
            console.log("Voici la liste de tous vos contacts :");
            contacts.forEach(function(contact) {
                                console.log(contact.decrire());
                            });
        } else if (choixSaisi === 2) {
            var nomSaisi = prompt("Entrez le nom du nouveau contact :");
            var prenomSaisi = prompt("Entrez le prénom du nouveau contact :");
            if (nomSaisi != "") {
                if (prenomSaisi != "") {
                    var contactSaisi = Object.create(Contact);
                    contactSaisi.init(nomSaisi, prenomSaisi);
                }
            }
            console.log("Le nouveau contact a été ajouté")
            contacts.push(nomSaisi);
            contacts.push(prenomSaisi); 

        } else {
            console.log("Je n'ai pas compris votre choix");
        }
    }
}

console.log("Au revoir !");
