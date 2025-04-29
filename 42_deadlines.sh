#!/bin/bash

# Tabela de dias por milestone e pace
declare -A milestones

# Preencher a tabela com os valores relevantes
milestones["0,8"]=30
milestones["0,12"]=45
milestones["1,8"]=32
milestones["1,12"]=48
milestones["2,8"]=54
milestones["2,12"]=81
milestones["3,8"]=90
milestones["3,12"]=134
milestones["4,8"]=141
milestones["4,12"]=211
milestones["4,15"]=264
milestones["4,18"]=316
milestones["4,22"]=387
milestones["4,24"]=447
milestones["5,22"]=584
milestones["5,24"]=644
milestones["6,22"]=670
milestones["6,24"]=730

# Perguntar ao utilizador (em formato dd-mm-aaaa)
read -p "Data atual da milestone (dd-mm-aaaa): " data_input
read -p "Número da milestone (0 a 6): " milestone
read -p "Pace atual: " pace_atual
read -p "Novo pace: " novo_pace

# Converter para formato YYYY-MM-DD para o comando date funcionar
data_atual=$(date -d "$(echo $data_input | sed 's/\([0-9]*\)-\([0-9]*\)-\([0-9]*\)/\3-\2-\1/')" +%Y-%m-%d)

# Buscar os valores da tabela
dias_atual=${milestones["$milestone,$pace_atual"]}
dias_novo=${milestones["$milestone,$novo_pace"]}

# Verificação
if [ -z "$dias_atual" ] || [ -z "$dias_novo" ]; then
    echo "Erro: combinação de milestone e pace não encontrada na tabela."
    exit 1
fi

# Calcular diferença e nova data
dias_extra=$((dias_novo - dias_atual))
nova_data=$(date -d "$data_atual +$dias_extra days" +%d-%m-%Y)

# Mostrar resultado
echo "Nova deadline para a milestone $milestone se mudares do pace $pace_atual para o pace $novo_pace: $nova_data"

