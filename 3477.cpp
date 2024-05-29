/*Baú Danificado
Senhor Moacir guarda um objeto muito importante para sua família em casa: um baú de madeira dos anos 50. Fazendo uma limpeza em seu sótão, ele percebe que a madeira do objeto está danificada e decide restaurá-la. Sabe-se que madeira maciça é um material de custo alto, então Moacir decide restaurar apenas a área danificada.
A figura abaixo corresponde a lateral de seu baú. A parte escura da figura equivale à área danificada que necessita ser restaurada.
Compreendendo que ER é o raio do semicírculo, no qual o centro é E, seu programa deve determinar o valor da área que será restaurada, dados os valores de X, Y e Z.
Obs: Considere para este problema π = 3.

Entrada
A entrada consiste em três números inteiros N (1 ≤ N ≤ 1000), que indicam os valores de X, Y e Z, respectivamente.

Saída
A saída deve conter a frase “Nao eh retangulo!”, se os valores lidos não formarem um triângulo retângulo. Se os valores formarem um triângulo retângulo, a saída deverá conter a palavra “AREA = ” seguida pelo valor total correspondente à área escura da figura.
*/

#include <iostream>
using namespace std;
 
int main() {
    int x,y,z;
    cin >> x>>y>>z;
    
    if (x*x!=z*z+y*y){
        cout<<"Nao eh retangulo!\n";
    }
    else{
        int soma=(((y*z)/2) + 3 * ((z*z) / 8));
        cout<<"AREA = "<< soma<< endl;
    }
    return 0;
}