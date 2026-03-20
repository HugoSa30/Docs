/*
 * Program: n42.bin
 * Function: FUN_001ea300
 * Entry: 001ea300
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_001ea300(void)

{
  byte in_cr0;
  int in_CTR;
  
  if (in_CTR != 1 && (bool)(in_cr0 & 1)) {
    func_0x00000008();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

