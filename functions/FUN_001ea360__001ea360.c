/*
 * Program: n42.bin
 * Function: FUN_001ea360
 * Entry: 001ea360
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_001ea360(void)

{
  byte unaff_cr4;
  int in_CTR;
  
  if (in_CTR == 1 || !(bool)(unaff_cr4 >> 3 & 1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_CTR == 2 || !(bool)(unaff_cr4 >> 1 & 1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

