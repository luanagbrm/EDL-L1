/*
Atividade L1
arquivo: Grazielle_AlmeidaATL1.c
Autores: Geovanna Cristina Brenzinger
		 Grazielle Batista de Almeida
		 Luana Gabrielle Rodrigues Macedo
  		 Isabela Nunes dos Santos
Data: 11/03/2025
Descricao: verificar existencia de duplicatas em uma lista
*/
                        
void construirNumeros(unsigned char V[]){
	srand(time(NULL));
	unsigned char qtd_numeros;
	unsigned char i;
	unsigned char j;
	
	V[0] = 9;
 
	for(i = 1; i <= 9; i++){
		V[i] = rand()%9+1;
	}
}

void mostrarNumeros(unsigned char V[]){
	unsigned char i;
	unsigned char qntNum;
	
	qntNum = V[0];
	
	for(i = 1; i <= qntNum; i++){
		printf("%d ", V[i]);
	}
	printf("\n");
}

bool verificarRepetido(unsigned char V[]){
	bool tem_duplicata;
	unsigned char i;
	unsigned char j;
	unsigned char qntNum;
	
	qntNum = V[0];
	
	tem_duplicata = FALSE;
	i = 1;
	
	while(i < qntNum && tem_duplicata != TRUE){
		j = i + 1;
		while(j <= qntNum && tem_duplicata != TRUE){
			if(V[i]==V[j]){
				tem_duplicata = TRUE;
			} else {
				j = j + 1;
			}	
		}
		i = i + 1;
	}		
	
	return tem_duplicata;
}
