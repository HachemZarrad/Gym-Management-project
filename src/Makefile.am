## Process this file with automake to produce Makefile.in

INCLUDES = \
	-DPACKAGE_DATA_DIR=\""$(datadir)"\" \
	-DPACKAGE_LOCALE_DIR=\""$(prefix)/$(DATADIRNAME)/locale"\" \
	@PACKAGE_CFLAGS@

bin_PROGRAMS = project3

project3_SOURCES = \
	main.c \
	support.c support.h \
	interface.c interface.h \
	callbacks.c callbacks.h \
	verfier.c verfier.h\
	rendezvous.c rendezvous.h\
	dispo.c dispo.h\
	fonction.c fonction.h\
	fonct.c fonct.h\
	rendezvous1.c rendezvous1.h\
	fiched.c fiched.h \
	afonction.c afonction.h \
	afficher.c afficher.h \
	afficher2.c afficher2.h \
	afficher3.c afficher3.h \
	dispob.c dispob.h \
	reservationb.c reservationb.h \
	patientkineb.c patientkineb.h \
	hech_afficher.c hech_afficher.h \
	hech_afficher_dispo.c hech_afficher_dispo.h \
	hech_afficher_fiche.c hech_afficher_fiche.h \
	hech_afficher_profil.c hech_afficher_profil.h \
	hech_reservation.c hech_reservation.h


project3_LDADD = @PACKAGE_LIBS@ $(INTLLIBS)

