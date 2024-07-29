


#include <stdio.h>
#include <stdlib.h> 

// Declaração de variáveis globais
int menuP, itemlimpeza, quant, menulimpeza, itemvenda, menuvendas, menupadaria, itempadaria, maquininha, voltarmenup, contl = 0, contv = 0, contp = 0, cont;
float totallimp, totalvenda, totalpadaria, total, valortroco, pagamento, faturamentolimpeza = 0, faturamentovenda = 0, faturamentopadaria = 0, caixa = 0;
float totalgeral = 0.0f, totalfaturamento = 0.0f;

// Protótipos das funções
void menuPrincipal();
void MenuLimpeza();
void menuVenda();
void menuPadaria();
void menuPagamento();
void menuFechamento();
void menuAbertura();

int main() {


do{
    cont = 0;

    // Chama a função do menu principal
    menuPrincipal();

    // Verifica a escolha do usuário e chama a função correspondente
    if(menuP == 1) {
        MenuLimpeza();
    } else if(menuP == 2) {
        menuVenda();
    } else if(menuP == 3) {
        menuPadaria();
    } else if(menuP == 4) {
        menuPagamento();
    } else if(menuP == 5) {
        menuFechamento();
    } else if(menuP == 6) {
        menuAbertura();
    } else if(menuP == 7) {
        printf("Saindo do progrma");
        cont =1;
    }   

}while (cont == 0);

return 0;
}



   
void menuPrincipal(){
    // Loop principal do programa


        // Menu principal
        printf("+--------------------------+\n");
        printf("| **Opcoes do Menu**       |\n");
        printf("+--------------------------+\n");
        printf("| 1. Material de Limpeza   |\n");
        printf("| 2. Venda de Alimentos    |\n");
        printf("| 3. Padaria               |\n");
        printf("| 4. Pagamento             |\n");
        printf("| 5. Fechamento de Caixa   |\n");
        printf("| 6. Abertura de Caixa     |\n");
        printf("| 7. Sair                  |\n");
        printf("+------------------------- +\n");

        printf("Digite sua opcao: ");
        scanf("%d", &menuP);

        // Validação da entrada do menu principal
        if (menuP < 1 || menuP > 7) {
            system("cls");
            printf("Valor inválido. Digite um número entre 1 e 7.\n");
        }             


}



void MenuLimpeza(){          
    system("CLS");   
                // Loop do menu de material de limpeza
                while(menulimpeza != 18) {
                    // Exibe o menu de material de limpeza
                    printf("Voce escolheu Material de Limpeza.\n");
                    printf("+---------------------------------------------+\n");
                    printf("|            **Lista de Compras**             |\n");
                    printf("+---------------------------------------------+\n");
                    printf("|---------------------------------------------|\n");
                    printf("| 11 |     Detergente        | R$ 1,99        |\n");
                    printf("| 12 |     Sabao em Po (1kg) | R$ 8,99        |\n");
                    printf("| 13 |     Esponja           | R$ 1,50        |\n");
                    printf("| 14 |     Amaciante (1Lt)   | R$ 15,00       |\n");
                    printf("| 15 |     Bucha de Pia (kit c /3)  R$ 4.99   |\n");
                    printf("| 16 |     Desinfetante (1Lt)   | R$ 7.99     |\n");
                    printf("| 17 |     Sabao em Barra (Un)  | R$ 1.00     |\n");
                    printf("+---------------------------------------------+\n");
                    printf("| 18 | Voltar ao Menu Principal               |\n");
                    printf("+---------------------------------------------+\n");

                    // Lê o código do item
                    scanf("%d", &itemlimpeza);

                    // Validação da entrada do item
                    if (itemlimpeza < 11 || itemlimpeza > 18) {
                        system("cls");
                        printf("**Valor invalido** Digite um número entre 11 e 18.\n");
                   
                    } else {
                        // Se o código digitado for 18, volta ao menu principal
                        if (itemlimpeza == 18) {
                            system("cls");
                            break;
                        }
                        // Lê a quantidade do item
                        printf("Qual a quantidade: ");
                        scanf("%d", &quant);

                        // Acumula o total da compra
                        if (itemlimpeza == 11) {
                            totallimp += quant * 1.99;
                            contl += quant;
                        } else if (itemlimpeza == 12) {
                            totallimp += quant * 8.99;
                            contl += quant;
                        } else if (itemlimpeza == 13) {
                            totallimp += quant * 1.50;
                            contl += quant;
                        } else if (itemlimpeza == 14) {
                            totallimp += quant * 15;
                            contl += quant;
                        } else if (itemlimpeza == 15) {
                            totallimp += quant * 4.99;
                            contl += quant;
                        } else if (itemlimpeza == 16) {
                            totallimp += quant * 7.99;
                            contl += quant;
                        } else if (itemlimpeza == 17) {
                            totallimp += quant * 1.00;
                            contl += quant;
                        }
                        system("cls");
                        printf("O carrinho de materiais de limpezas esta em %.2f\n", totallimp);
                    }
            
                }
               }
            

        
           
           
          
void menuVenda(){        
    system("CLS");
                while (menuvendas != 28) {
                    // Exibe o menu de venda de alimentos
                    printf("Voce escolheu venda de alimentos.\n");
                    printf("+---------------------------------------------+\n");
                    printf("|            **Lista de Compras**             |\n");
                    printf("+---------------------------------------------+\n");
                    // Itens de venda de alimentos
                    printf("|---------------------------------------------|\n");
                    printf("| 21 |          Cafe         | R$ 19,99       |\n");
                    printf("| 22 |       Leite (cx)      | R$ 5,90        |\n");
                    printf("| 23 |       Arroz (1Kg)     | R$ 4,50        |\n");
                    printf("| 24 |      Feijao Preto     | R$ 8,00        |\n");
                    printf("| 25 |      Acucar (1Kg)     | R$ 5,00        |\n");
                    printf("| 26 |      Sal (1Kg)        | R$ 2,00        |\n");
                    printf("| 27 |      Farinha de Trigo (1Kg)| R$ 5,00   |\n");
                    printf("+---------------------------------------------+\n");
                    printf("| 28 | Voltar ao Menu Principal               |\n");
                    printf("+---------------------------------------------+\n");

                    // Lê o código do item
                    scanf("%d", &itemvenda);

                    // Validação da entrada do item
                    if (itemvenda < 21 || itemvenda > 28) {
                        system("cls");
                        printf("**Valor invalido** Digite um número entre 21 e 28.\n");
                    } else {
                        // Se o código digitado for 28, volta ao menu principal
                        if (itemvenda == 28) {
                            system("cls");
                            break;
                        }
                        // Lê a quantidade do item
                        printf("Qual a quantidade: ");
                        scanf("%d", &quant);

                        // Acumula o total da compra
                        if (itemvenda == 21) {
                            totalvenda += quant * 19.99;
                            contv += quant;
                        } else if (itemvenda == 22) {
                            totalvenda += quant * 5.90;
                            contv += quant;
                        } else if (itemvenda == 23) {
                            totalvenda += quant * 4.50;
                            contv += quant;
                        } else if (itemvenda == 24) {
                            totalvenda += quant * 8.00;             
                            contv += quant;  
                        } else if(itemvenda == 25){
                            totalvenda += quant * 5.00;
                            contv += quant;
                        } else if(itemvenda == 26){
                            totalvenda += quant * 2.00;
                            contv += quant;
                        } else if(itemvenda == 27){
                            totalvenda += quant * 5.00;
                            contv += quant;
                        }
                        system("cls");
                        printf("O carrinho da venda de alimentos esta em %.2f\n", totalvenda);
                    }
                }
            
}






void menuPadaria(){
    system("CLS");

            // Opção 3: Padaria

                while (menupadaria != 38) {
                    // Exibe o menu de padaria
                    printf("Voce escolheu padaria.\n");
                    printf("+---------------------------------------------+\n");
                    printf("|            **Lista de Compras**             |\n");
                    printf("+---------------------------------------------+\n");
                    // Itens de padaria
                    printf("|---------------------------------------------|\n");
                    printf("| 31 |          Pao de Forma       | R$ 9,50  |\n");
                    printf("| 32 |          Pao Integral       | R$ 12,50 |\n");
                    printf("| 33 |        Pao Frances(Unid)    | R$ 1,90  |\n");
                    printf("| 34 |             Sonho           | R$ 8,50  |\n");
                    printf("| 35 |         Biscoito (kg)       | R$ 12,50 |\n");
                    printf("| 36 |         Pao Doce (Un)       | R$ 2,50  |\n");
                    printf("| 37 |          Salgado (Un)       | R$ 17,50 |\n");
                    printf("+---------------------------------------------+\n");
                    printf("| 38 | Voltar ao Menu Principal               |\n");
                    printf("+---------------------------------------------+\n");

                    // Lê o código do item
                    scanf("%d", &itempadaria);

                    // Validação da entrada do item
                    if (itempadaria < 31 || itempadaria > 38) {
                        system("cls");
                        printf("**Valor invalido** Digite um número entre 31 e 38.\n");
                    } else {
                        // Se o código digitado for 38, volta ao menu principal
                        if (itempadaria == 38) {
                            system("cls");
                            break;
                        }
                        // Lê a quantidade do item
                        printf("Qual a quantidade: ");
                        scanf("%d", &quant);

                        // Acumula o total da compra
                        if (itempadaria == 31) {
                            totalpadaria += quant * 9.50;
                            contp += quant;
                        } else if (itempadaria == 32) {
                            totalpadaria += quant * 12.50;                                  
                            contp += quant;
                        } else if (itempadaria == 33) {
                            totalpadaria += quant * 1.90;
                            contp += quant; 
                        } else if (itempadaria == 34) {
                            totalpadaria += quant * 8.50;
                            contp += quant;
                        } else if(itempadaria == 35) {
                            totalpadaria += quant * 12.50;
                            contp += quant;
                        } else if(itempadaria == 36){
                            totalpadaria += quant * 2.50;
                            contp += quant;
                        } else if(itempadaria == 37){
                            totalpadaria += quant * 17.50;
                            contp += quant;
                        }
                        system("cls");
                        printf("O carrinho da padaria esta em R$%.2f\n", totalpadaria);
                    }
                }

}   
          
          
          
          
          
          
          
          
          
void menuPagamento(){
                system("cls");
                printf("Voce escolheu menu de pagamento.\n");
                printf("+--------------------------------------+\n");
                printf("|            **PAGAMENTO**             |\n");
                printf("+--------------------------------------+\n");

                printf("O carrinho de materiais de limpeza deu R$%.2f\n", totallimp);
                printf("O carrinho da padaria deu R$%.2f\n", totalpadaria);
                printf("O carrinho da venda de alimentos deu R$%.2f\n", totalvenda);

                // Cálculo do total geral e faturamentos individuais
                total += totallimp + totalpadaria + totalvenda;
                totalfaturamento += totallimp + totalpadaria + totalvenda;
                faturamentolimpeza += totallimp;
                faturamentopadaria += totalpadaria;
                faturamentovenda += totalvenda;

                // Escolha do pagamento
                while (pagamento != 1 && pagamento != 2 ) {
                    printf("O total eh R$%.2f\n", total);
                    printf("Escolha a forma de pagamento:\n");
                    printf("1- Dinheiro com desconto\n");
                    printf("2- Cartao\n");
                    scanf("%f", &pagamento);
                    if (pagamento != 1 && pagamento != 2) {
                        printf ("opcao invalida digite novamente");
                    }
                }

                // Pagamento em dinheiro
                if(pagamento == 1){
                    if (total <= 50 ){      
                        total =  total - (total * 0.05);
                    } else if (total > 50 && total < 100){
                        total = total - (total * 0.10);
                    } else if (total >= 100){
                        total = total - (total * 0.18);
                        printf("O preco com desconto ficou R$%.2f\n", total);
                    }
                    if (total < 50) {
                        printf("Nao tem desconto, o preco continua sendo R$%.2f\n", total);
                    }
                    printf("Qual o valor que o cliente pagou? ");
                    scanf("%f", &valortroco);
                    if(valortroco < total){
                        totalgeral = total - valortroco;
                        printf("Ainda falta R$ %.2f\n", totalgeral);
                    } else {
                        totalgeral = valortroco - total;
                        printf("O troco vai ser %.2f\n", totalgeral);
                        // Atualização do caixa
                        caixa += totalgeral;
                        printf("\nAinda restam R$%.2f no caixa\n", caixa);
                    }

                    // Resetando os valores para uma nova compra
                    totallimp = 0.0f;
                    totalpadaria = 0.0f;
                    totalvenda = 0.0f;
                    total = 0.0f;
                    pagamento = 0.0f;
                }
                // Pagamento em forma de cartao
                else if (pagamento == 2){
                    while (1){         
                        printf("Maquininha OK 1 ou NAO 2\n ");       
                        scanf("%d", &maquininha);
                        if (maquininha == 1){
                            // Resetando os valores para uma nova compra
                            totallimp = 0.0f;
                            totalpadaria = 0.0f;
                            totalvenda = 0.0f;
                            total = 0.0f;
                            pagamento = 0.0f;
                            break; 
                        }
                        if (maquininha == 2) {
                            printf("Maquininha indisponível. Escolha outra forma de pagamento:\n");
                            printf("1- Dinheiro com desconto\n");
                            printf("2- Cartão\n");
                            scanf("%f", &pagamento);

                            if (pagamento == 1) {
                                if (total <= 50) {
                                    total = total - (total * 0.05);
                                } else if (total > 50 && total < 100) {
                                    total = total - (total * 0.10);
                                } else if (total >= 100) {
                                    total = total - (total * 0.18);
                                    printf("O preço com desconto ficou R$%.2f\n", total);
                                } else {
                                    printf("\nNão tem desconto, o preço continua sendo R$%.2f\n", total);
                                }
                                printf("Qual o valor que o cliente pagou?\n");
                                scanf("%f", &valortroco);

                                if (valortroco < total) {
                                    totalgeral = total - valortroco;
                                    printf("Ainda falta R$ %.2f\n", totalgeral);
                                } else {
                                    totalgeral = valortroco - total;
                                    printf("O troco vai ser %.2f\n", totalgeral);
                                }

                                // Resetando os valores para uma nova compra
                                totallimp = 0.0f;
                                totalpadaria = 0.0f;
                                totalvenda = 0.0f;
                                total = 0.0f;
                                pagamento = 0.0f;
                                // Sair do loop while
                                break;
                            } else {
                                printf("Opcao invalida. Digite 1 ou 2\n");
                            }
                        }
                    }    
                }
            } 
            
            
            
            
            
            
            
           
void menuFechamento(){
    system("CLS");
                printf("[- O FATURAMENTO DO DIA FOI -]\n\n");
                // Imprime os faturamentos de cada setor e o total
                printf("O faturamento de Material de limpeza foi R$%.2f, com %d de vendas\n", faturamentolimpeza, contl);
                printf("O faturamento de Venda de Alimentos foi R$%.2f, com %d de vendas\n", faturamentovenda, contv);
                printf("O faturamento de Padaria foi R$%.2f, com %d de vendas\n", faturamentopadaria, contp);
                printf("Total do Faturamento hoje foi de %.2f\n", totalfaturamento);
                // Saída do programa
                exit(1);
            }
          
            
            
            
            
            
void menuAbertura(){
    system("CLS");
    printf("[- BEM VINDO A ABERTURA DE CAIXA -]\n\n");
    printf("Digite o valor para o caixa : ");
    scanf("%f", &caixa);
    printf("\nDeseja voltar ao menu principal? 1-SIM 2-NAO");
    scanf("%d", &voltarmenup);
    system("cls");
    if(voltarmenup == 2){
        printf("Saindo do programa.\n");
    }
    
    }
               

            

            
            
        
      
    
    

