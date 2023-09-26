c
c $Id: comhst.h,v 1.1.1.1 1995/02/09 23:26:42 ccm2 Exp $
c $Author: ccm2 $
c
C
C Integer and logical variables related to history tapes
C
      integer pichsum  ! Max. value of 4*ichar(character)
      parameter (pichsum=508)
C
      common /comhst/
     $   nhtfrq(ptapes)    ,mfilt(ptapes) ,nlfilt             ,
     $   ndens(ptapes)     ,nflds(ptapes) ,nfils(ptapes)      ,
     $   hunit(ptapes)     ,nrlen(ptapes) ,nplen(ptapes)      ,
     $   sunit             ,stfnum        ,mtapes             ,
     $   nexcl             ,nincl         ,hbufpt(ptapes)     ,
     $   nacs(pflds,plat)  ,iflds(3,pflds),nupnt(pflds,ptapes),
     $   npnt(pflds,ptapes),ndcurf(ptapes),ncdatf(ptapes)     ,
     $   nscurf(ptapes)    ,ncsecf(ptapes),nfldsc(0:pichsum,ptapes),
     $   islocc(0:pichsum,ptapes)         ,hstwr(ptapes)      ,
     $   rstwr             ,nacsav(pflds,plat)
C
      integer nhtfrq,  ! Array of write frequencies
     $        mfilt    ! Number of write-ups per volume
      logical nlfilt   ! Flag for extra file on 1st vol (ktape=1)
      logical hstwr    ! Flag for history writes
      logical rstwr    ! Flag for restart writes
      integer ndens,   ! Array of input packing densities
     $        nflds,   ! Array of total fields on tape
     $        nfils,   ! Array of current files on the volume
     $        hunit,   ! History tape disk units
     $        nrlen,   ! Record length
     $        nplen,   ! Packed record length,
     $        sunit,   ! History tape SSD unit
     $        stfnum,  ! Starting number for history tape naming
     $        mtapes,  ! Actual number of tapes requested
     $        nexcl,   ! Actual number of excluded fields
     $        nincl,   ! Actual number of included primary tape fields
     $        hbufpt,  ! Ptrs to start of fields for each tape in hbuf
     $        nacs,    ! Number of accumulations for field
     $        nacsav,  ! Saved accumulations for restart
     $        iflds,   ! Integer portion of master field list
     $        nupnt,   ! Array of unpacked field pointers
     $        npnt,    ! Array of packed field pointers
     $        ndcurf,  ! First "current" day for each tape
     $        ncdatf,  ! First "current" date for each tape
     $        nscurf,  ! First "current" second of day for each tape
     $        ncsecf,  ! First "current" second of date for each tape
     $        nfldsc,  ! Number of fields starting with given ichar(1-4)
     $        islocc   ! Index of starting location for each ichar sum
C
C  Character variables related to history tapes
C
      common /comhtc/
     $   nfpath(ptapes)     ,ppath(ptapes)       ,cpath(ptapes)       ,
     $   nhfil(ptapes)      ,ninavg(ptapes)      ,caseid              ,
     $   ctitle             ,fieldn(2,pflds)     ,exclude(pflds)      ,
     $   primary(pflds)     ,aux(pflds,ptapes-1)
C
      character*80 nfpath,    ! Array of first pathnames, for header
     $             ppath,     ! Array of previous pathnames, for header
     $             cpath      ! Array of current pathnames
      character    nhfil*6,   ! Array of current file names
     $             ninavg*1,  ! Tape fields instantaneous or averaged
     $             caseid*8   ! Case identifier
      character*80 ctitle     ! Case title
      character*8  fieldn,    ! Character portion of master field list
     $             exclude,   ! List of fields to rm from primary tape
     $             primary,   ! List of fields to add to primary tape
     $             aux        ! Lists of fields for auxiliary tapes
C
#ifdef LOGENTRY 
$Log: comhst.h,v $
 * Revision 1.1.1.1  1995/02/09  23:26:42  ccm2
 * Start Omega Model. Split into spectral/sld modules
 *
 * Revision 1.2  1994/06/10  23:36:06  bath
 * bum steer
 *
 * Revision 1.1.1.1  1994/04/21  23:55:12  ccm2
 * First cvs version of plx22
 * 
#endif
