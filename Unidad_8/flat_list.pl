% P07 (**) Flatten a nested list structure.
% Transform a list, possibly holding lists as elements into a `flat' list by replacing each list with its elements (recursively).
%
% Example:
% ?- my_flatten([a, [b, [c, d], e]], X).
% X = [a, b, c, d, e]
% Hint: Use the predefined predicates is_list/1 and append/3

my_flatten([],[]).

my_flatten([X|CL],F) :- is_list(X), my_flatten(X,X2), my_flatten(CL,CL2), append(X2,CL2,F).
my_flatten([X|CL],F) :- not(is_list(X)), my_flatten(CL,CL2), append([X],CL2,F).
