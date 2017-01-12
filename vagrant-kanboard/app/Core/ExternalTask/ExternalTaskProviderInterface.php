<?php

namespace Kanboard\Core\ExternalTask;

/**
 * Interface ExternalTaskProviderInterface
 *
 * @package Kanboard\Core\ExternalTask
 * @author  Frederic Guillot
 */
interface ExternalTaskProviderInterface
{
    /**
     * Get provider name (visible in the user interface)
     *
     * @access public
     * @return string
     */
    public function getName();

    /**
     * Retrieve task from external system or cache
     *
     * @access public
     * @throws \Kanboard\Core\ExternalTask\ExternalTaskException
     * @param  string $uri
     * @return ExternalTaskInterface
     */
    public function fetch($uri);

    /**
     * Save external task to another system
     *
     * @throws \Kanboard\Core\ExternalTask\ExternalTaskException
     * @param  string $uri
     * @param  array  $formValues
     * @param  array  $formErrors
     * @return bool
     */
    public function save($uri, array $formValues, array &$formErrors);

    /**
     * Get task import template name
     *
     * @return string
     */
    public function getImportFormTemplate();

    /**
     * Get creation form template
     *
     * @return string
     */
    public function getCreationFormTemplate();

    /**
     * Get modification form template
     *
     * @return string
     */
    public function getModificationFormTemplate();

    /**
     * Get task view template name
     *
     * @return string
     */
    public function getViewTemplate();

    /**
     * Build external task URI based on import form values
     *
     * @param  array $formValues
     * @return string
     */
    public function buildTaskUri(array $formValues);
}
