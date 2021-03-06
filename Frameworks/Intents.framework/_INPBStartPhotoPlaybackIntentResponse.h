/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBStartPhotoPlaybackIntentResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int searchResultsCount : 1; 
    }  _has;
    int  _searchResultsCount;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) BOOL hasSearchResultsCount;
@property (nonatomic) int searchResultsCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasSearchResultsCount;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)searchResultsCount;
- (void)setHasSearchResultsCount:(BOOL)arg1;
- (void)setSearchResultsCount:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
