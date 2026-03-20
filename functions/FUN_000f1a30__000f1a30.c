/*
 * Program: n42.bin
 * Function: FUN_000f1a30
 * Entry: 000f1a30
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f1a30(void)

{
  undefined4 local_10 [2];
  
  if (DAT_003fa05d == '\0') {
    do {
    } while( true );
  }
  _DAT_003fa068 = FUN_000a35ac();
  newqu_um = (byte)(_DAT_003fa068 & 0xf);
  FUN_000f1ad8(_DAT_003fa068 & 0xf);
  local_10[0] = _DAT_003fa06c;
  FUN_000a3480(local_10);
  _DAT_003fa064 = FUN_000f15ac();
  DAT_003fa05d = 1;
  return;
}

