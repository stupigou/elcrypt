/*
** elcrypt.h for elcrypt in /home/tran_0/rendu/elcrypt
** 
** Made by David Tran
** Login   <tran_0@epitech.net>
** 
** Started on  Fri Mar 13 21:05:54 2015 David Tran
** Last update Fri Mar 13 21:29:11 2015 David Tran
*/

#ifndef ELCRYPT_H_
# define ELCRYPT_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

typedef union		u_key
{
  unsigned long int	key;
  char			c_key[64];
  
}			t_key;

#endif /* !ELCRYPT_H_ */
