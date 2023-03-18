#include <stdio.h>

int loop(int cont, int cont2, int cont3, int pro, int lin, int dom, int dom2, int seg, int seg2, int ter, int ter2, int qua, int qua2, int qui, int qui2, int sex, int sex2, int sab, int sab2)
{
    if(cont==7)
    {
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n", cont2);
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", cont3);

        if(dom2>seg2 && dom2>ter2 && dom2>qua2 && dom2>qui2 && dom2>sex2 && dom2>sab2)
        {
            printf("DIA QUE MAIS PRODUZIU: DOMINGO\n");
            return;
        }
        else if(seg2>dom2 && seg2>ter2 && seg2>qua2 && seg2>qui2 && seg2>sex2 && seg2>sab2)
        {
            printf("DIA QUE MAIS PRODUZIU: SEGUNDA\n");
            return;
        }
        else if(ter2>seg2 && ter2>dom2 && ter2>qua2 && ter2>qui2 && ter2>sex2 && ter2>sab2)
        {
            printf("DIA QUE MAIS PRODUZIU: TERCA\n");
            return;
        }
        else if(qua2>seg2 && qua2>ter2 && qua2>dom2 && qua2>qui2 && qua2>sex2 && qua2>sab2)
        {
            printf("DIA QUE MAIS PRODUZIU: QUARTA\n");
            return;
        }
        else if(qui2>seg2 && qui2>ter2 && qui2>qua2 && qui2>dom2 && qui2>sex2 && qui2>sab2)
        {
            printf("DIA QUE MAIS PRODUZIU: QUINTA\n");
            return;
        }
        else if(sex2>seg2 && sex2>ter2 && sex2>qua2 && sex2>qui2 && sex2>dom2 && sex2>sab2)
        {
            printf("DIA QUE MAIS PRODUZIU: SEXTA\n");
            return;
        }
        else if(sab2>seg2 && sab2>ter2 && sab2>qua2 && sab2>qui2 && sab2>sex2 && sab2>dom2)
        {
            printf("DIA QUE MAIS PRODUZIU: SABADO\n");
            return;
        }
    }
    else
    {
        scanf("%d %d", &pro, &lin);
        if(cont==0)
        {
            dom = pro;
            dom2 = lin;
            if(dom>=5)
            {
                cont2++;
            }
            if(dom2>=100)
            {
                cont3++;
            }
        }
        else if(cont==1)
        {
            seg = pro;
            seg2 = lin;
            if(seg>=5)
            {
                cont2++;
            }
            if(seg2>=100)
            {
                cont3++;
            }
        }
        else if(cont==2)
        {
            ter = pro;
            ter2 = lin;
            if(ter>=5)
            {
                cont2++;
            }
            if(ter2>=100)
            {
                cont3++;
            }
        }
        else if(cont==3)
        {
            qua= pro;
            qua2 = lin;
            if(qua>=5)
            {
                cont2++;
            }
            if(qua2>=100)
            {
                cont3++;
            }
        }
        else if(cont==4)
        {
            qui = pro;
            qui2 = lin;
            if(qui>=5)
            {
                cont2++;
            }
            if(qui2>=100)
            {
                cont3++;
            }
        }
        else if(cont==5)
        {
            sex = pro;
            sex2 = lin;
            if(sex>=5)
            {
                cont2++;
            }
            if(sex2>=100)
            {
                cont3++;
            }
        }
        else if(cont==6)
        {
            sab = pro;
            sab2 = lin;
            if(sab>=5)
            {
                cont2++;
            }
            if(sab2>=100)
            {
                cont3++;
            }
        }

        loop(cont+1, cont2, cont3, pro, lin, dom, dom2, seg, seg2, ter,  ter2,  qua,  qua2,  qui,  qui2,  sex,  sex2,  sab,  sab2);
    }
}

int main() {
    
    int cont=0, pro, lin, cont2=0, cont3=0;
    int dom, dom2, seg, seg2, ter,  ter2,  qua,  qua2,  qui,  qui2,  sex,  sex2,  sab,  sab2;
    loop(cont, cont2, cont3, pro, lin, dom, dom2, seg, seg2, ter,  ter2,  qua,  qua2,  qui,  qui2,  sex,  sex2,  sab,  sab2);
    
	return 0;
}