#!/bin/bash
# Script de creacion de llaves ssh para github
# Autor: Ignacio Illanes -> iguiillanes@github.com

rm -rf .ssh/*

(sleep 1; echo; echo; echo) | ssh-keygen

echo "Host github.com
 Hostname ssh.github.com
 Port 443" >> .ssh/config

clear

echo
echo "======================= TU LLAVE SSH ES ======================="
echo
echo "$(<.ssh/id_rsa.pub)"
echo
echo "==============================================================="
echo
echo "VISITA https://github.com/settings/keys PARA PODER ASOCIAR TUS LLAVES"
