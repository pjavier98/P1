#include <stdio.h>

void formatar(double valores)
{
	int x = round(valores * 100); // arredonda o numero ex: 1296.60 - 1296.6

	if (x % 10 == 0)
	{
		printf("%.1lf\n", valores);
	}
    
    else
    {
		printf("%.2lf\n", valores);
	}
}

void impostos(double dolar, double icms, double produto, double frete)
{
	icms = icms / 100;
	
	double produto_reais, frete_reais, valor_total, valor_importacao;

	double valor_final, valor_icms, valor_impostos, total_pagar;

	formatar(dolar);
	
	produto_reais = produto * dolar;
	formatar(produto_reais);

	frete_reais = frete * dolar;
	formatar(frete_reais);

	valor_total = (produto_reais + frete_reais);
	formatar(valor_total);

	if (produto <= 2500)
	{
		valor_importacao = (produto_reais + frete_reais) * 0.6;
		formatar(valor_importacao);

		valor_final = ((produto_reais + frete_reais) * 1.6);

		valor_icms = valor_final / (1 - icms) - valor_final;
		formatar(valor_icms);

		valor_impostos = valor_icms + valor_importacao;
		formatar(valor_impostos);

		total_pagar = valor_impostos + valor_total;
		formatar(total_pagar);

		printf("Impostos calculados com o frete\n");
	}
	
	else
	{
		valor_importacao = (produto_reais) * 0.6;
		formatar(valor_importacao);

		valor_final = ((produto_reais) * 1.6);

        valor_icms = valor_final / (1 - icms) - valor_final;
        formatar(valor_icms);

        valor_impostos = valor_icms + valor_importacao;
		formatar(valor_impostos);

		total_pagar = valor_impostos + valor_total;
		formatar(total_pagar);
               
		printf("Impostos calculados sem o frete\n");
	}
}

int main()
{
	double dolar, icms, produto, frete;

	scanf("%lf %lf %lf %lf", &dolar, &icms, &produto, &frete);

	impostos(dolar, icms, produto, frete);

	return 0;
}