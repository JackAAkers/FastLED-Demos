
// Leave the line above blank
void rainbow_march() {                                // RAINBOW MARCH, DOESN'T SUPPORT FADE
  
  if (thisdir == 0) thishue -= 1; else thishue+=1;
  fill_rainbow( leds, NUM_LEDS, thishue );
  show_at_max_brightness_for_power();

//  FastLED.delay(thisdelay*2.5);
  delay_at_max_brightness_for_power(thisdelay*2.5);
//  delay(thisdelay);

}
