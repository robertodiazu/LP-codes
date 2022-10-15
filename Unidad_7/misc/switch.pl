% Escribir el equivalente en Prolog de la siguiente función codificada en C:

% char codigo(int x){
%     switch(x){
%         case 4: return 'x';
%         case 8: return 'y';
%         default: return 'z';
%     }
% }

% Los cuts son necesarios para evitar el "retorno" de múltiples valores
codigo(4,'x') :- !.
codigo(8,'y') :- !.
codigo(_,'z').