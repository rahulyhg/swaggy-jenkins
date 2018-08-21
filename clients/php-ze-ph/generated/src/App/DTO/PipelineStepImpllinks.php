<?php

namespace App\DTO;

use Articus\DataTransfer\Annotation as DTA;

/**
 */
class PipelineStepImpllinks
{
    /**
     * @DTA\Data(field="self", nullable=true)
     * @DTA\Strategy(name="Object", options={"type":\App\DTO\Link::class})
     * @DTA\Validator(name="Dictionary", options={"type":\App\DTO\Link::class})
     * @var \App\DTO\Link
     */
    public $self;
    /**
     * @DTA\Data(field="actions", nullable=true)
     * @DTA\Strategy(name="Object", options={"type":\App\DTO\Link::class})
     * @DTA\Validator(name="Dictionary", options={"type":\App\DTO\Link::class})
     * @var \App\DTO\Link
     */
    public $actions;
    /**
     * @DTA\Data(field="_class", nullable=true)
     * @DTA\Validator(name="Type", options={"type":"string"})
     * @var string
     */
    public $_class;
}