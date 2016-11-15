//Some Sample Songs::

/* For Reference:::
 * Numbers (0-9) set the octave.  The default octave, '4', is the middle C
 * octave, and higher octave numbers produce higher frequencies.
 *
 * Note length is set using the letters 'o'..'t':
 *   'o' = whole note      'r' = eigth note
 *   'p' = half note       's' = sixteenth note
 *   'q' = quarter note    't' = thirty-second note
 *
 * The default is sixteenth-note, and a whole note is defined as 3 seconds.
 * Octave and note length persist until changed, or until the string ends.
 *
 * Natural notes are played by using the upper-case letters A-G.  Sharp notes
 * are played using lower-case letters a, c-d, & f-g (there is no B# or E#).
 * Flat notes are played by using the sharp of the next lower natural-note.
 * For instance, G flat is entered as F sharp ('f').
 *
 * Rests are indicated using the symbols '*', '+', ',', '-', '.', '/':
 *   '*' = whole rest      '-' = eigth rest
 *   '+' = half rest       '.' = sixteenth rest
 *   ',' = quarter rest    '/' = thirty-second rest
 *
 * Dynamics are set using the letters 'O' .. 'R':
 *		'O' = piano
 *		'P' = mezzo piano
 *		'Q' = mezzo forte
 *		'R' = forte
 */

//Keep in mind for this book, RobotC strings have maximum length of 20 characters
string book[] = {"badinerie", "solfegietto", "czardas"};

//Badinerie, by Johann Sebastian Back, in 4 parts (1&2 repeat, then 3&4 repeat)
char* badinerie1 = "Qs6B.7D6Bf.BfD.fD5q_BsfB6D5B6c5B6c5Ba6cEcrD5Bs6B.7D6Bf.BfD.fD5q_B6sD.D.D.D.B.D.DtEDrcsf.f.f.f.7D.6f.ftGfrF";
char* badinerie2 = "Qs6cfAfgfgfFgBgAgAgfAfFfBfFf7c6fFf7D6fFf7DRc6B7c6AgfrAsgtAgqf";
char* badinerie3 = "Rs6f.Afc.fc5A.6c5Aq_fQr6C5B6EsdfrAsGfrGERsG.7D6GE.GEc.Ec5qAsA6DfDEDEDcEGEfEfEQDfDcDGDcDADcDBDcDBRAGAfEDrfsEtfEqDs6f.f.f.f.";
char* badinerie4 = "R7D.5f.ftGfrEsE.E.E.E.7c.6E.EtfErDsQB.7D6BtAqGsGtGBAGfqErEtGfEDsCEGEC5B6C5RBa.f.rGfQBsa6crEsDcrDt5B6cDErfsRDfrBfsEDcDtcq5B";

//Solfeggietto, by Carl Philipp Emanuel Bach, in 9 parts
char* solfeggietto1 = "tQ4dCdG5CdDC4BGB5DGFdD_dCdG6CdDCDC5BAGFdD_dCdG6CdDC5BGB6DGFdD_dCdG7CdDCDC6BAGFdD_";
char* solfeggietto2 = "tQ6dC5GdC7C6Gdg4Fg5CFg6Cd_D5aFD4a6aFDG4dGa5dGa6D_C5AgA6C5AgA6dC5GA6dC5GA_6DC5fA6AC5fA6fC5DA6C5AfC_";
char* solfeggietto3 = "tQ5a4D3a4DGaAGfDfA5DC4aA_aGa5DGaAGAGfEDC4aA_aGa5DGaAGfDfA6DC5aA_aGa6DGaAGAGfEDC5aA_";
char* solfeggietto4 = "tQ5aGa6DGD5aG4F6GD5BGB6DG_5dG6G5G6C5G6G5GBG6F5GDG6F5G_6dCdG7C6GdC4G7C6GECEG7C_5g6C7C6CFC7C6CECaC5G6CaC_";
char* solfeggietto5 = "tQ6g4C3g4CFgGFECEG5C4agG_gFg5CFgGFGFEDC4agG_gFg5CFgGFECEG6C5agG_gFg6CFgGFGFEDC5agG_";
char* solfeggietto6 = "tQ5g6FC5gF6C5gFCgFC4g5FC4g_qct6gFEFGFEF_4qCt5gFEFGFEF_3qBt7D6FGgGFdD_";
char* solfeggietto7 = "tQ6dG7C6GagGFrdtDdsD_t5dG6G5G6C5G6G5GBG6F5GDG6F5G_aG6E5GCG6E5GF6d7C6d5A6d7C6d_5gF6D5F4a5F6D5Fd6cac5G6cac_";
char* solfeggietto8 = "tQ4g5d6C5dfd6C5d4f6C7C6C5d6C7C6C_5d6CdG7C6GdCGdC5G6FD5BF_d4CdG5CdDC4BGB5DGFdD_dCdG6CdDCDC5BAGFdD_";
char* solfeggietto9 = "tQ5dCdG6CdDC5BGB6DGFdD_dCdG7CdD6B7C6GdDC5GdD_rC";

//Czardas, by V. Monti, in 5+ parts
char* czardas1 = "Rs6D7D.6Pa.A.FErDscrD-tDEFEDEFEDEFEDEFDsFrQEsdrE-tOGAaAGAaAGAaAGaAGFGAGFGAGFGAGFAGFPt5AB6cDEFGAQaAGFEDcEsErRDsQcrD-";
char* czardas2 = "Ot6C5B6CEGaGEC5B6CEGaGE5aAa6CPDEFGQrA-Ot5AgA6cEGEc5AgA6cEGEc5AgAB6PcDEDQrF-O";
char* czardas3 = "Ot6aAGAaAGAaAGAaAGaPAGFGAGFGAGFGAGFA5AB6cDEFGAQaAGFEDcEsErRDsQcrD-";
char* czardas4 = "Rt5D6f7rD6sAtA/AsBAGffEtEdEGqBQsBtB/csc7EEtE/6GsGGt5DA6sGftfEDErfsf/AR5tD6f7rD6sAtA/AsBAGffEtEdEGqBr7D6tAsAABAAcQrEDDcqD,";
char* czardas5 = "Oq8Dr7A.sArBAGffEEGpBrB.sArAA8c7BAGGffFqfA8D7rA.sArBAGffEEGpB8qDr7AABAAqcEDDcoD+";
