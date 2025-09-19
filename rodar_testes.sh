#!/bin/bash
gcc -o missao.exe missaoJoaoCalvino.c

echo "Teste 01:"
./missao.exe < /workspaces/PAA2/testes/teste1.txt
echo ""

echo "Teste 02:"
./missao.exe < /workspaces/PAA2/testes/teste2.txt
echo ""

echo "Teste 03:"
./missao.exe < /workspaces/PAA2/testes/teste3.txt
echo ""
