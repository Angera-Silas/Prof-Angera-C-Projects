-- Active: 1680899385383@@127.0.0.1@3306@web
show tables;
select * from members;
ALTER TABLE members ADD Email_address VARCHAR(50);
UPDATE members SET Email_address ='mumbuahillary@gmail.com' WHERE ID = 38103457;
ALTER TABLE members MODIFY Email_address VARCHAR UNIQUE NOT 