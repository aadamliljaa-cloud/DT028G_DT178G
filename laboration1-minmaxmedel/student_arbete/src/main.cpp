#include <iostream>

int main () {
   // Variabler för att hålla reda på minsta, största, summa och antal tal.
int tal;
int minTal;
int maxTal;
int summa = 0;
int antal = 0;


bool forstaTal = true;
// Läser ett heltal i taget tills inmatningen tar slut (EOF)
while (std::cin >> tal) {

// Lägger till varje nytt tal i summan och ökar antalet inlästa tal.
   summa += tal;
   antal++;
// Första talet används som startvärde för både minsta och största talet.
if (forstaTal == true) {
   minTal = tal;
   maxTal = tal;
   forstaTal = false;
}
// Uppdaterar minsta talet om det nya talet är mindre än det tidigare minsta.
else if (tal < minTal) {
   minTal = tal;
}
// Uppdaterar största talet om det nya talet är större än det tidigare största.
if (tal > maxTal) {
   maxTal = tal;
} 
}
// Kontrollerar att minst ett tal har lästs in innan medelvärdet beräknas.
if (antal > 0) {
std::cout << "Minsta talet är: " << minTal << "\n";
std::cout << "Största talet är: " << maxTal << "\n";

double medelvarde;

// Omvandlar summan till double så att medelvärdet kan få decimaler.
   medelvarde = (double)summa / antal;
   std::cout << "Medelvärdet är: " << medelvarde << "\n";
}
else {
   std::cout << "Inga tal matades in.\n";
}
}

