-- Active: 1719769677745@@127.0.0.1@3306

-- create database
CREATE DATABASE Shop;

-- change database
USE Shop;

-- create table
CREATE TABLE items (id INT, item_name VARCHAR(255));

-- insert 5 rows into the table
INSERT INTO
    items
VALUES
    (1, "Sugar"),
    (2, "Salt"),
    (3, "Flour"),
    (4, "Cinnamon"),
    (5, "Oil");

-- select everything from the table
SELECT
    * FROM items;