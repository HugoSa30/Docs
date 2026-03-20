/*
 * Program: n42.bin
 * Function: FUN_001ea2f0
 * Entry: 001ea2f0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_001ea2f0(void)

{
  byte in_cr0;
  int in_CTR;
  
  if (in_CTR != 1 && (bool)(in_cr0 >> 2 & 1)) {
    FUN_001ea2f0();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

