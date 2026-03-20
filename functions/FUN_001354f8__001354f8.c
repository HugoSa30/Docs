/*
 * Program: n42.bin
 * Function: FUN_001354f8
 * Entry: 001354f8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001354f8(void)

{
  if (inisynmon != 500) {
    sync_level = 0;
    B_tprel = B_tprel & ~(B_bm|B_stprel|B_tprel|B_zprel|B_zsynchro);
    (*(code *)&SUB_00fad688)(&UNK_003f9af8,1);
    (*(code *)&SUB_00fb2b24)(&UNK_003f9b0c);
    func_0xff223e84();
    (*(code *)&SUB_00fb2aa0)();
    (*(code *)&SUB_00fae7f0)();
  }
  return;
}

