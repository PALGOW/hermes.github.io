#include <iostream>

using namespace std;

int main() {
    
    char name[20], brand[20];
    int isEngine, strength, mass, transport, extend;
    cout << "Hangi firma adina islem yapmak istiyorsunz!\n";
    cin >> name;
    cout << "1) Motor alimi yapildiysa 1 yaziniz \n2) Sasi alimi yapildiysa 2 yaziniz\n Seceneginiz:";
    cin >> isEngine;
    cout << "\n============================================\n";
    cout << "Urunun dayanikliligini puanlayiniz (1-10): ";
    cin >> strength;
    cout << "Urunun agirliginin yarisi etkilemesini puanlayiniz (1-10): ";
    cin >> mass;
    cout << "Urunun siparis verdiginiz andan, elinize ulastigi ana kadar temin suresini puanlayiniz (1-10): ";
    cin >> transport;
    cout << "Urunun sozlesmesini sonraki sezonlarda uzatmayi dusunur musunuz? (1: Evet, 2: Hayir): ";
    cin >> extend;
    cout << "Urunu satin almadan once hangi markalardan almayi dusundunuz?\n";
    cin >> brand;
    cout << "\nTesekkurler!";
    cout << "\nHERMES TECHNIC POWER TRAINS";
    
    cout << "*@@@&.                                                                                        #@@@ \n    @@@@@@@@@@@@#.                            .#@@@@@&/                             /@@@@@@@@@@@@,  \n   .@*     #&@@@@@@@@@@@@@              @@@%     @@    *@@@/             /@@@@@@@@@@@@@%,    .@@   \n      @@@@@@@@@@@@@%.   @@@@         @@#.@(  @@@@@@@@@/  &@ @@(        %@@@   ./@@@@@@@@@@@@@,     \n        %@#      (@@@@@@# @@@      @@    @@@            @@%   (@#     (@@. @@@@@@&.     .@@        \n           %@@@@@@@@@@@@@  @@&   .@@&  @@                #@@@  @@@    @@  ,@@@@@@@@@@@@@.          \n             @@&(        ,@ %@. .@*  #@               @@@   @@   @@  @@ &/.       *%@@.            \n                .%@@@@@@@@@% *@ @@   @*        @@@@@@(       @@   @,@@ .@@@@@@@@@@*                \n                               &@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@,                              \n                                @@@@@@@@&/,,,,**%###/*,,,,/@@@@@@@@                                \n                                %@@@@@@@@///,,,*./,*/,,*/*@@@@@@@@@                                \n                                 @@@@@@@@@@*///,,/*,,/*/(@@@@@@@@@/                                \n                                  %@@@@&&@@@@@@#////%@@@@@@@@@@@@.                                 \n                                    @@@@@&&&@@@@@@@@@@@@&&&@@@@(                                   \n                                      .@@@@@@&&&&&&&&&@@@@@@@                                      \n                                          .@@@@@@@@@@@@@#                                          \n";

    return 0;
}
