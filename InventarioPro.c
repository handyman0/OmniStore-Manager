/* sistema de controle de estoque que inicialmente vai ter uma lista
 * 1 - Registro de Produtos 
 *     Nome do Produto
 *     descrição
 *     codigo
 *     fornecedor
 *     preco de compra
 *     preco de venda
 *     quantidade atual
 *     quantidade minima
 *     categoria ou departamento
 *     data de aquisição
 *     data de validade
 *     notas adicionais
 *
 * 2 - Controle de estoque - atualizacão em tempo real dos niveis de estoque
 *     função para adicionar, remover e atualizar quantidade de produtos (adicionar um contador)
 *
 * 3 - Gestão de fornecedores
 *     nome do fornecedor (incluir cadastro)
 *     historico de compras
 *     precos dos produtos 
 *
 * 4 - Alertas (quantidade baixa em estoque, produtos proximos da validade e encomendas atrasadas)
 *
 * 5 - Relatório e analises - 
 *     Geração de relatorio sobre movimentações do estoque.
 *     vendas
 *     margem de lucro
 *     produto mais vendido
 *     perdas - roubo, furto e improprio.
 *
 *     analise para previsão de demanda e otimização de estoque.
 * 
 * 6 - Integração com vendas e compras.
 *     Integração com sistema de vendas para a atualização automatica de estoque apos a venda
 *     Integração com sistema de compras para reabastecimento automatico de produtos com base no estoque minimo.
 *
 * 7 - sistema de login e senha.
 *
 * 8 - mecanismo de backup e recuperação de dados protegendo o sistema contra perdas
 *
 * 10 - interface amigavel 
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void casdatrarprodutos(){}

int main(int argc, char *argv[]){
	int opcao;
	printf("MENU - PRINCIPAL");
	printf("\n");
	printf("1 - Cadastrar Produtos\n");
	printf("2 - Controle de Estoque\n");
	printf("3 - Fornecedores\n");
	printf("4 - Alertas\n");
	printf("5 - Relatorios e Analises\n");
	scanf("%d", &opcao);
	printf("\n");

	switch(opcao){
		case 1:
			char nomeproduto[50]; 
			char categoria[50]; 
			char vericod;
			int codigo;
			printf("você escolheu cadastrar produtos\n\n");
			while (1) {
				printf("Qual o codigo do Produto?\n");
				scanf("%d", &codigo);
				printf("O codigo %d esta correto? y ou n.\n", codigo);
				scanf("%s", &vericod);
				if (toupper(vericod) == 'Y') {
					printf("gravando codigo: %d...\n", codigo);
					break;
				}else if(toupper(vericod) == 'N'){
					printf("vamos tentar novamente.\n");
				}else{
					printf("opção Invalida! Por favor, digite 'y' para sim, 'n' para não\n");
				}
			}
			printf("Qual o nome do produto?\n");
			scanf("%49s", nomeproduto);

			printf("Qual a categoria do Produto\n");
			scanf("%49s", categoria);

			printf("Produto cadastrado\n");
			printf("%d | %s | %s\n", codigo, nomeproduto, categoria);
			break;
		case 2:
                        printf("você escolheu controle de estoque");
                        break;
		case 3:
                        printf("você escolheu Fornecedores");
                        break;
		case 4:
                        printf("você escolheu Alertas");
                        break;
		case 5:
                        printf("você escolheu relatorios e analises");
                        break;
		default:
                        break;
	}
return 0;
}

