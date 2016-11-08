/* PlayTune(string) takes a string and plays it as a tune.
 * Borrowed with permission from vexrobotics,
 * Adapted to allow tunes longer than 20 characters.
 *
 * The string (char array in this case) is read from left to right, one character at a time.
 * Each character either plays a note, causes a rest, or sets the octave
 * or note length.
 *
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
 *
 * All other symbols are ignored.
 */

/* Note frequencies taken from Wikipedia "Scientific Pitch Notation" */
/* A9, B9, C9, D9, E9, F9, G9 */
const int NaturalNotes[7]    = { 14080, 15804, 8372, 9397, 10548, 11175, 12544 };
/* A#9, x, C#9, D#9, x, F#9, G#9  */
const int AccidentalNotes[7] = { 14917,     0, 8870, 9956,     0, 11840, 13290 };

/* Dynamics for piano, mezzo piano, mezzo forte, forte */
const int Dynamics[4] = { 5, 15, 27, 45 };

/* Let's define our whole note to be a large multiple of two */
#define WHOLE_NOTE (256)

void PlayTune(const char* music)
{
  byte cursor = 0;
  int duration = WHOLE_NOTE >> 4;  // Default to sixteenth-note
  byte octave = 4; // Defaults to 4th octave, where middle C is
	setSoundVolume(Dynamics[1]); //Defaults to mezzo piano
  char c;

  do {
    c = music[cursor];
    cursor++;
    while(bSoundActive) { } ; // wait for sound idle
    if (c>='0' && c<='9') {
      octave = c-'0'; // set the octave
    } else if (c>='o' && c<='t') {
      duration = WHOLE_NOTE >> (c-'o'); // set note duration
    } else if (c>='*' && c<='/') {
      wait1Msec(10 * (WHOLE_NOTE >> (c-'*'))); // rest
  	} else if (c>='O' && c<='R') {
  		setSoundVolume(Dynamics[c - 'O']);
    } else if (c>='A' && c<='G') {
      playTone(NaturalNotes[c-'A']>>(9-octave), duration);
    } else if (c>='a' && c<='g') {
      playTone(AccidentalNotes[c-'a']>>(9-octave), duration);
    }
  } while (c);
}
