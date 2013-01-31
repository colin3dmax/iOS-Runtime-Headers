/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKPStyleProperties;

@interface VKPZoomProperty : PBCodable  {
    float _maxZ;
    float _minZ;
    VKPStyleProperties *_properties;
}

@property float minZ;
@property float maxZ;
@property(retain) VKPStyleProperties * properties;


- (void)applyTo:(id)arg1 zoom:(float)arg2;
- (void)setMaxZ:(float)arg1;
- (float)maxZ;
- (void)setMinZ:(float)arg1;
- (float)minZ;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setProperties:(id)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (BOOL)readFrom:(id)arg1;
- (id)properties;
- (id)dictionaryRepresentation;

@end