parent(raghu,shreeram).
parent(raghu,gita).
parent(rama,shreeram).
parent(rama,gita).
parent(shreeram,rahul).
parent(yamini,rahul).
parent(gita,rajat).
parent(rahul,dhurva).
male(shreeram).
female(rama).


children(X,Y):- parent(Y,X).
grandparent(Z,Y):-parent(Z,X),parent(X,Y).
grandchildren(X,Y):-grandparent(Y,X).
siblings(X,Z):-parent(Y,X),parent(Y,Z).
father(X,Y):-parent(X,Y),male(X).
mother(X,Y):-parent(X,Y),female(X).

