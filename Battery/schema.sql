CREATE TYPE Battery_type AS ENUM ('Battery');
CREATE TABLE Battery (
    id SERIAL PRIMARY KEY,
    chargingLevel TEXT,
    chargingStatus TEXT,
    chargingMode TEXT,
    voltage TEXT,
    current TEXT,
    temperature TEXT,
    chargingTime TEXT,
    dischargingTime TEXT,
    chargeCycles INTEGER,
    remainingCapacity TEXT,
    fullChargeCapacity TEXT,
    StateOfHealth TEXT,
    healthStatus TEXT,
    type Battery_type,
    dateCreated TIMESTAMP,
    dateModified TIMESTAMP
);
