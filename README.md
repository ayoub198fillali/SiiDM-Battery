[![N|SII](https://github.com/ayoub198fillali/SiiDM-Battery/blob/main/Assets/POWERED%20BY.png?raw=true)](https://www.sii.com)

[![Build Status](https://github.com/ayoub198fillali/SiiDM-Battery/blob/main/Assets/passing.svg)](https://github.com/ayoub198fillali/SiiDM-Battery)

# ~ DATA MODEL EN ~

# Smart Data Model : Battery

The Battery Smart Data Model provides a semantic representation of data related to a battery. It can be used to collect and share data on charge levels, charge states, temperatures, voltages, currents, charge cycles, remaining and full capacities, as well as battery health.

## Context

The Battery Smart Data Model uses NGSI-LD context to provide a semantic structure to battery data. The context includes definitions for the following concepts:

- `chargingLevel`: The current level of battery charge,expressed as a percentage.
- `chargingStatus`: The current state of battery charging, which can be one of the following: charging, discharging, or full.
- `chargingMode`: The current mode of battery charging, which can be one of the following: Linked or Wireless.
- `voltage`: The current voltage of the battery, expressed in volts.
- `current`: The current electric current of the battery, expressed in amperes.
- `temperature`: The current temperature of the battery, expressed in degrees Celsius.
- `chargingTime`: The estimated time remaining until the battery is fully charged, expressed in minutes.
- `dischargingTime`: The estimated time remaining until the battery is fully discharged, expressed in minutes.
- `chargeCycles`: The number of complete charge/discharge cycles that the battery has undergone, expressed in CYC.
- `remainingCapacity`: The current remaining capacity of the battery, expressed in kilowatt-hours (kWh).
- `fullChargeCapacity`: The maximum capacity of the battery when fully charged, expressed in kilowatt-hours (kWh).
- `StateOfHealth`: The State of Health is an indicator of the battery's overall health and its ability to store and deliver energy compared to its original nominal capacity(Refreshed Every 12h) else '-'. It is expressed as a percentage.
- `healthStatus`: The general health status of the battery, which can be one of the following: ok, warning, or critical. The value is expressed as a percentage, with 0 indicating a severely degraded battery and 100 indicating a battery in perfect health.

The context also includes definitions for the unit codes that are used to specify the measurement units of each property.

## Usage

The Battery Smart Data Model can be used to collect and share data on batteries in various domains, such as electric vehicles, electronic equipment, solar panels, etc.

Data can be collected from battery sensors or other data sources and stored in an NGSI-LD compatible data storage system. The data can then be used to monitor battery status, predict battery failures, optimize battery charging, and more.

## License

This Smart Data Model is released under the CopyRight license.

## Contributions

Contributions are welcome! To contribute to this data model, please refer to the CONTRIBUTING.yaml file for instructions on how to contribute.

## Contact

For any questions or comments, please contact SII at [SII Email Address] or visit our website at https://sii-group.com/.

# ~ DATA MODEL FR ~

# Smart Data Model : Batterie

La Smart Data Model Battery fournit une représentation sémantique des données liées à une batterie. Elle peut être utilisée pour collecter et partager des données sur les niveaux de charge, les états de charge, les températures, les tensions, les courants, les cycles de charge, les capacités restantes et complètes, ainsi que la santé des batteries.

## Contexte

La Smart Data Model Battery utilise le contexte NGSI-LD pour fournir une structure sémantique aux données de la batterie. Le contexte comprend des définitions pour les concepts suivants :

- `chargingLevel` : Le niveau actuel de charge de la batterie, exprimé en pourcentage.
- `chargingStatus` : L'état actuel de charge de la batterie, qui peut être l'un des suivants : en charge, en décharge ou pleine.
- `chargingMode` : Le mode actuel de charge de la batterie, qui peut être l'un des suivants : lié ou sans fil.
- `voltage` : La tension actuelle de la batterie, exprimée en volts.
- `current` : Le courant électrique actuel de la batterie, exprimé en ampères.
- `temperature` : La température actuelle de la batterie, exprimée en degrés Celsius.
- `chargingTime` : Le temps estimé restant jusqu'à ce que la batterie soit complètement chargée, exprimé en minutes.
- `dischargingTime` : Le temps estimé restant jusqu'à ce que la batterie soit complètement déchargée, exprimé en minutes.
- `chargeCycles` : Le nombre de cycles complets de charge/décharge que la batterie a subis, exprimé en CYC.
- `remainingCapacity` : La capacité restante actuelle de la batterie, exprimée en kilowatts-heures (kWh).
- `fullChargeCapacity` : La capacité maximale de la batterie lorsqu'elle est complètement chargée, exprimée en kilowatts-heures (kWh).
- `StateOfHealth` : L'état de santé est un indicateur de la santé globale de la batterie et de sa capacité à stocker et fournir de l'énergie par rapport à sa capacité nominale d'origine(actualisé chaque 12h) sinon prend '-'. Il est exprimé en pourcentage.
- `healthStatus` : L'état de santé général de la batterie, qui peut être l'un des suivants : ok, avertissement ou critique. La valeur est exprimée en pourcentage, 0 indiquant une batterie très dégradée et 100 indiquant une batterie en parfait état de santé.

Le contexte comprend également des définitions pour les codes d'unité qui sont utilisés pour spécifier les unités de mesure de chaque propriété.

## Utilisation

Le modèle de données intelligent pour les batteries peut être utilisé pour collecter et partager des données sur les batteries dans divers domaines, tels que les véhicules électriques, les équipements électroniques, les panneaux solaires, etc.

Les données peuvent être collectées à partir de capteurs de batterie ou d'autres sources de données et stockées dans un système de stockage de données compatible avec NGSI-LD. Les données peuvent ensuite être utilisées pour surveiller l'état de la batterie, prédire les défaillances de la batterie, optimiser la charge de la batterie, et plus encore.

## Licence

Ce modèle de données intelligent est publié sous la licence CopyRight.

## Contributions

Les contributions sont les bienvenues ! Pour contribuer à ce modèle de données, veuillez vous référer au fichier CONTRIBUTING.yaml pour les instructions sur la façon de contribuer.

## Contact

Pour toute question ou commentaire, veuillez contacter SII à [Adresse e-mail de SII] ou visiter notre site Web à https://sii-group.com/en-FR.
