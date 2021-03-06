/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTypesetter : NSObject {
    void *_reserved;
}

+ (BOOL)_usesATSTypesetter;
+ (int)defaultStringDrawingTypesetterBehavior;
+ (int)defaultTypesetterBehavior;
+ (void)initialize;
+ (id)sharedSystemTypesetter;
+ (id)sharedSystemTypesetterForBehavior:(int)arg1;

- (struct { struct { /* ? */ } *x1; struct _NSRange { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct _NSRange { unsigned int x_3_1_1; unsigned int x_3_1_2; } x3; float x4; float x5; int (*x6)(); int (*x7)(); float x8; float x9; float x10; float x11; float x12; float x13; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_14_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_14_1_2; } x14; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_15_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_15_1_2; } x15; struct _NSRange { unsigned int x_16_1_1; unsigned int x_16_1_2; } x16; id x17; int x18; struct { unsigned int x_19_1_1 : 4; unsigned int x_19_1_2 : 1; unsigned int x_19_1_3 : 1; unsigned int x_19_1_4 : 1; unsigned int x_19_1_5 : 4; unsigned int x_19_1_6 : 4; unsigned int x_19_1_7 : 1; unsigned int x_19_1_8 : 1; unsigned int x_19_1_9 : 1; unsigned int x_19_1_10 : 1; unsigned int x_19_1_11 : 2; unsigned int x_19_1_12 : 1; unsigned int x_19_1_13 : 10; } x19; void *x20[0]; }*)_allocateAuxData;
- (BOOL)_allowsEllipsisGlyphSubstitution;
- (int)_baseWritingDirection;
- (id)_ellipsisFontForFont:(id)arg1;
- (BOOL)_forceOriginalFontBaseline;
- (struct { struct { /* ? */ } *x1; struct _NSRange { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct _NSRange { unsigned int x_3_1_1; unsigned int x_3_1_2; } x3; float x4; float x5; int (*x6)(); int (*x7)(); float x8; float x9; float x10; float x11; float x12; float x13; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_14_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_14_1_2; } x14; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_15_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_15_1_2; } x15; struct _NSRange { unsigned int x_16_1_1; unsigned int x_16_1_2; } x16; id x17; int x18; struct { unsigned int x_19_1_1 : 4; unsigned int x_19_1_2 : 1; unsigned int x_19_1_3 : 1; unsigned int x_19_1_4 : 1; unsigned int x_19_1_5 : 4; unsigned int x_19_1_6 : 4; unsigned int x_19_1_7 : 1; unsigned int x_19_1_8 : 1; unsigned int x_19_1_9 : 1; unsigned int x_19_1_10 : 1; unsigned int x_19_1_11 : 2; unsigned int x_19_1_12 : 1; unsigned int x_19_1_13 : 10; } x19; void *x20[0]; }*)_getAuxData;
- (unsigned int)_getRemainingNominalParagraphRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1 andParagraphSeparatorRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 charactarIndex:(unsigned int)arg3 layoutManager:(id)arg4 string:(id)arg5;
- (BOOL)_isLineBreakModeOverridden;
- (void)_layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned int)arg2 maxNumberOfLineFragments:(unsigned int)arg3 maxCharacterIndex:(unsigned int)arg4 nextGlyphIndex:(unsigned int*)arg5 nextCharacterIndex:(unsigned int*)arg6;
- (union { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; int x_1_1_4; } x1; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_2_1_1; } x2; }*)_lineFragmentRectForProposedRectArgs;
- (void)_setForceOriginalFontBaseline:(BOOL)arg1;
- (void)_setLineBreakModeOverridden:(BOOL)arg1;
- (void)_updateParagraphStyleCache:(id)arg1;
- (unsigned int)actionForControlCharacterAtIndex:(unsigned int)arg1;
- (id)attributedString;
- (id)attributesForExtraLineFragment;
- (float)baselineOffsetInLayoutManager:(id)arg1 glyphIndex:(unsigned int)arg2;
- (void)beginLineWithGlyphAtIndex:(unsigned int)arg1;
- (void)beginParagraph;
- (BOOL)bidiProcessingEnabled;
- (struct _NSRange { unsigned int x1; unsigned int x2; })characterRangeForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 actualGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (id)currentParagraphStyle;
- (id)currentTextContainer;
- (void)dealloc;
- (void)deleteGlyphsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)endLineWithGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)endParagraph;
- (void)finalize;
- (BOOL)finalizeLineFragmentRect:(inout struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 lineFragmentUsedRect:(inout struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 baselineOffset:(inout float*)arg3 forGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (unsigned int)getGlyphsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 glyphs:(unsigned int*)arg2 characterIndexes:(unsigned int*)arg3 glyphInscriptions:(unsigned int*)arg4 elasticBits:(BOOL*)arg5 bidiLevels:(char *)arg6;
- (unsigned int)getGlyphsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 glyphs:(unsigned short*)arg2 properties:(int*)arg3 characterIndexes:(unsigned int*)arg4 bidiLevels:(char *)arg5;
- (void)getLineFragmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 usedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 forParagraphSeparatorGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 atProposedOrigin:(struct CGPoint { float x1; float x2; })arg4;
- (void)getLineFragmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 usedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 remainingRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3 forStartingGlyphAtIndex:(unsigned int)arg4 proposedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5 lineSpacing:(float)arg6 paragraphSpacingBefore:(float)arg7 paragraphSpacingAfter:(float)arg8;
- (struct _NSRange { unsigned int x1; unsigned int x2; })glyphRangeForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 actualCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (float)hyphenationFactor;
- (void)insertGlyph:(unsigned int)arg1 atGlyphIndex:(unsigned int)arg2 characterIndex:(unsigned int)arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })layoutCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 forLayoutManager:(id)arg2 maximumNumberOfLineFragments:(unsigned int)arg3;
- (void)layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned int)arg2 maxNumberOfLineFragments:(unsigned int)arg3 nextGlyphIndex:(unsigned int*)arg4;
- (id)layoutManager;
- (unsigned int)layoutParagraphAtPoint:(struct CGPoint { float x1; float x2; }*)arg1;
- (float)lineFragmentPadding;
- (float)lineSpacingAfterGlyphAtIndex:(unsigned int)arg1 withProposedLineFragmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })paragraphCharacterRange;
- (struct _NSRange { unsigned int x1; unsigned int x2; })paragraphGlyphRange;
- (struct _NSRange { unsigned int x1; unsigned int x2; })paragraphSeparatorCharacterRange;
- (struct _NSRange { unsigned int x1; unsigned int x2; })paragraphSeparatorGlyphRange;
- (float)paragraphSpacingAfterGlyphAtIndex:(unsigned int)arg1 withProposedLineFragmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (float)paragraphSpacingBeforeGlyphAtIndex:(unsigned int)arg1 withProposedLineFragmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)setAttachmentSize:(struct CGSize { float x1; float x2; })arg1 forGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setAttributedString:(id)arg1;
- (void)setBidiLevels:(const char *)arg1 forGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setBidiProcessingEnabled:(BOOL)arg1;
- (void)setDrawsOutsideLineFragment:(BOOL)arg1 forGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setHardInvalidation:(BOOL)arg1 forGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setHyphenationFactor:(float)arg1;
- (void)setLineFragmentPadding:(float)arg1;
- (void)setLineFragmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 usedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 baselineOffset:(float)arg4;
- (void)setLocation:(struct CGPoint { float x1; float x2; })arg1 withAdvancements:(const float*)arg2 forStartOfGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)setNotShownAttribute:(BOOL)arg1 forGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setParagraphGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 separatorGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setTightenThresholdForTruncation:(float)arg1;
- (void)setTypesetterBehavior:(int)arg1;
- (void)setUsesFontLeading:(BOOL)arg1;
- (id)substituteFontForFont:(id)arg1;
- (void)substituteGlyphsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withGlyphs:(unsigned int*)arg2;
- (id)textContainers;
- (id)textTabForGlyphLocation:(float)arg1 writingDirection:(int)arg2 maxLocation:(float)arg3;
- (float)tightenThresholdForTruncation;
- (int)typesetterBehavior;
- (BOOL)usesFontLeading;

@end
